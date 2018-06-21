	#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# Multi-Platform supported Make file.
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#	%.i - Creates the preprocessing file using -E flag and Preprocessing CPPFLAGS
#	%.o - Creates the object file using the -c FLAG and Preprocessing CPPFLAGS
#	%.asm -  Creates the assembly file using -S FLAG and Preprocesing CPPFLAGS and Compiling CFLAGS
#	build - Builds c1m2.map %.d %o c1m2.out
#	all - Same as build
# 	clean - Clean all the build files
#
# Platform Overrides:
#      <Put a description of the supported Overrides here
#
#------------------------------------------------------------------------------
include sources.mk

#General Flags
FLAGS = -Wall \
	-Werror \
	-g \
	-O0 \
	-std=c99

# Platform Overrides

PLATFORM = HOST
TARGET=c1m2

ifeq ($(PLATFORM),HOST)
	CC=gcc
	CFLAGS=$(FLAGS) 
	CPPFLAGS=-DHOST $(INCLUDES) #Prepro flags
	LDFLAGS = -Wl,-Map=$().map 
	# etc
endif

ifeq( $(PLATFORM),MSP432)
	CC=arm-none-eabi-gcc
	LINKER_FILE= -T ../msp432p401r.lds

	CPU=cortex-m4 
	ARCH=armv7e-m
	SPECS=nosys.specs
	OFLAGS=-mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16
	
	SOURCES = main.c \
		memory.c \
		startup_msp432p401r_gcc.c \
		interrupts_msp432p401r_gcc.c \
		system_msp432p401r.c
	
	INCLUDES = -I../include/CMSIS \
		 -I../include/msp432
	
	CFLAGS = $(FLAGS) $(OFLAGS) -mcpu=$(CPU) -march=$(ARCH) --specs=$(SPECS)
	CPPFLAGS = -DMSP432 $(INCLUDES) #Prepro flags
	LDFLAGS = -Wl,-Map=$().map 	
	# etc
endif

OBJS = $(SOURCES : .c=.o)
DEPS = $(SOURCES : .c=.d)
ASM = $(SOURCES : .c=.asm)
PRE = $(SOURCES : .c=.i)


%.i : %.c:
	$(CC) -E $< $(CPPFLAGS) 

%d : %.c
	$(CC) -E -M $< $(CPPFLAGS) -o $@

%.o : %.c
	$(CC) -c $< $(CFLAGS) -o $@

%.asm : %.c
	$(CC) -S $< $(CPPFLAGS) $(CFLAGS) -o $@

.PHONY : compile-all
compile-all : $(OBJS)

.PHONY: build
build : $(DEPS)
build : $(TARGET).out

$(TARGET).out: $(OBJS)
	$(CC) $(OBJS) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) -o $@


.PHONY: clean
clean :
	rm -f $(OBJS) $(DEPS) $(ASM) $(PRE) $(TARGET).out $(TARGET).map