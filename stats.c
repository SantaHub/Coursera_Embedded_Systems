/******************************************************************************
 * Copyright (C) 2017 by P B Austin
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. P B Austin is not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <Statistic from the data >
 *
 * <Add Extended Description Here>
 *
 * @author <P B Austin>
 * @date <June 17 2018 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

//   print_array(test, SIZE);
// printf("The Mean is %d\n", find_mean(test, SIZE));
// printf("The Minimum is %d\n", find_minimum(test, SIZE));
// printf("The Maximum is %d\n", find_maximum(test, SIZE));
// printf("The Median is %d\n", find_median(test, SIZE));
// printf("Sorting the array\n"); sort_array(test, SIZE);
// print_array(test, SIZE);

// char c; scanf("%c", &c);
}

/* Add other Implementation File Code Here */
void print_array(unsigned char *ar, unsigned int size){
  for(int i=0;i<size;i++){
    printf("%d\t", ar[i]);
    if((i+1)%5 ==0){
      printf("\n");
    }
  }
  printf("\n");
}

unsigned int find_mean(unsigned char *ar, unsigned int size){
  int mean=0;
  for(int i=0;i<size;i++){
    mean= mean+ ar[i];
  }
  return mean/size;
}

unsigned int find_maximum(unsigned char* ar,unsigned int size){
  int max=ar[0];

  for(int i =1;i<size;i++){
    if(ar[i] > max){
      max = ar[i];
    }
  }
  return max;
}

unsigned int find_minimum(unsigned char* ar,unsigned int size){
  int min=ar[0];

  for(int i =1;i<size;i++){
    if(ar[i] < min) {
      min = ar[i];
    }
  }
  return min;
}

void sort_array(unsigned char* ar, unsigned int size){

// Implementing Quick sort ;)
quick_sort(ar, 0,size);
}

void quick_sort(unsigned char* ar, int low, int high ){
    if(low < high){
      int p = part(ar, low, high);

      quick_sort(ar,low,p-1);
      quick_sort(ar,p+1, high);
    }
}

int part(unsigned char* ar, int low, int high){
  int pivot = ar[high];
  int prev = low -1;

  for(int i = low;i<high;i++){
    if(ar[i] <= pivot){
      prev++;
      int temp = ar[prev];
      ar[prev] = ar[i];
      ar[i] = temp;
    }
  }
  int temp = ar[prev];
  ar[prev] = ar[high];
  ar[high] = temp;

  return prev +1;
}


unsigned int find_median(unsigned char* ar, unsigned int size){
  sort_array(ar, size);
  if(size%2 ==0 ){
    return (ar[size/2] + ar[(size/2)-1])/2;
  }
  else {
  return ar[size/2];
  }
}
