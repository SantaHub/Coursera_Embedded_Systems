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
# <Put a Description Here>
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#      <Put a description of the supported targets here>
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
# PLATFORM = 
ifeq ($(PLATFORM),HOST)
	CC=gcc
	LD=ld
	INC=-I ../include/CMSIS
	PLATFORM_TARGET=HOST
	# etc
else
	CC= arm-none-eabi-gcc
	LD=arm-none=eabi-ld
	INC= -I ../include/msp432
	PLATFORM_TARGET=MSP432
	# etc
endif

PFLAG := $(CC) $(INC) -D$(PLATFORM_TARGET)

# Architectures Specific Flags
LINKER_FILE=../msp432p401r.lds
CPU=cortex-m4 
ARCH=armv7e-m
SPECS=nosys.specs


# Compiler Flags and Defines
# CC = 
# LD = 
LDFLAGS = -Wl, -Map=c1m2.map -T $(LINKER_FILE)
CFLAGS = -mtune=$(CPU) -march=$(ARCH) --specs=$(SPECS)
# CPPFLAGs = 

OBJS = $(SOURCES : .c=.o)

%.o : %.c
	$(CC) -c $< $(CFLAGS) -o $@

.PHONY: build
build : all

.PHONY: all
all : c1m2.out

.PHONY: clean
clean :
	rm -f $(OBJS) c1m2.out c1m2.map

c1m2.out: $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) $(LDFLAGS) -o $@
