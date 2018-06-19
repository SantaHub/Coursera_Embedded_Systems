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

void print_statistics(unsigned char* test, unsigned int size);
/**
 * @brief <Calls the stat methods>
 *
 * <The statistics methods are called from here>
 *
 * @param <ar> <Unsigned char pointer>
 * @param <size> <Unsigned Interger>
 *
 * @return <Void>
 */

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
/**
 * @brief <Finds Maximum>
 *
 * <The array is iterated to find the element with maximum value>
 *
 * @param <ar> <Unsigned char pointer>
 * @param <size> <Unsigned Interger>
 *
 * @return <unsigned Integer>
 */
unsigned int find_minimum(unsigned char* ar, unsigned int size);
/**
 * @brief <Finds the Minimum>
 *
 * <Array is iterated to find the element with minimum value in the array>
 *
 * @param <ar> <Unsigned char pointer>
 * @param <size> <Unsigned Interger>
 *
 * @return <unsigned Integer>
 */
unsigned int find_mean(unsigned char* ar, unsigned int size);
/**
 * @brief <Find the mean of the array>
 *
 * <Returns the mid value of the array as the mean value>
 *
 * @param <ar> <Unsigned char pointer>
 * @param <size> <Unsigned Interger>
 *
 * @return <unsigned Integer>
 */
void sort_array(unsigned char* ar, unsigned int size);
/**
 * @brief <Sorts the array>
 *
 * <Calls the quick sort function to sort the array in decending order>
 *
 * @param <ar> <Unsigned char pointer>
 * @param <size> <Unsigned Interger>
 *
 * @return <Void>
 */

unsigned int find_median(unsigned char* ar, unsigned int size);
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

#endif /* __STATS_H__ */
