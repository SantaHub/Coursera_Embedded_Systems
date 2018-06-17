/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
void print_array(unsigned char *ar, unsigned int size);
/**
 * @brief <Prints the array>
 *
 * <Array pointer is itereated using a loop variable and printed>
 *
 * @param <ar> <Unsigned char pointer>
 * @param <size> <Unsigned Interger>
 *
 * @return <Void>
 */

unsigned int find_maximum(unsigned char* ar, unsigned int size);
unsigned int find_minimum(unsigned char* ar, unsigned int size);
unsigned int find_mean(unsigned char* ar, unsigned int size);
void sort_array(unsigned char* ar, unsigned int size);
void quick_sort(unsigned char* ar, int low, int high );
int part(unsigned char* ar, int low, int high);
unsigned int find_median(unsigned char* ar, unsigned int size);

#endif /* __STATS_H__ */
