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
 * @file stats.c
 * @brief calculate some statistics on a set of numbers
 *
 *   A simple C-Programming example that exhibits a handful of basic c-programming
 * features to show how to calculate some statistics on a set of numbers:
 *     -Median
 *     -Average
 *     -Maximum
 *     -Minimum
 *     -Sort array from the largest to the smallest
 * @author Xujie ZHONG
 * @date 2020-03-12
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
  unsigned char *ptr1;
  ptr1 = test;
  /* Statistics and Printing Functions Go Here */
  print_array(ptr1, SIZE);
  print_statistics(ptr1, SIZE);
}


void print_statistics(unsigned char *ptr, unsigned int size){
  printf("The minimum value of the given array is %d\n", find_minimum(ptr, size));
  printf("The maximum value of the given array is %d\n", find_maximum(ptr, size));
  printf("The mean value of the given array is %d\n", find_mean(ptr, size));
  printf("The median value of the given array is %d\n", find_median(ptr, size));
}


void print_array(unsigned char *ptr, unsigned int size){
  int i;
  for(i = 0; i < size; i++){
    printf("%d\t", *(ptr+i));
  }
  printf("\n");
}

unsigned char find_median(unsigned char *ptr, unsigned int size){
  sort_array(ptr, size);
  if(size%2 == 0){
    return ((*(ptr+size/2)+*(ptr+size/2-1))/2);
  }
  if(size%2 == 1){
    return (*(ptr+size/2));
  }
}
 

unsigned char find_mean(unsigned char *ptr, unsigned int size){
  int i;
  unsigned char mean = 0;
  if(ptr == NULL){
    return 0;
  }

  if(size <= 0){
    size = 1;
  }

  for(i = 0; i < size; i++){
    mean += *ptr;
    ptr++;
  }
  return (mean/size);
}


unsigned char find_maximum(unsigned char *ptr, unsigned int size){
  int i;
  unsigned char max;
  max = *ptr;
  for(i = 0; i < size; i++){
    if(*ptr > max){
      max = *ptr;
    }
  /*printf("%d\t", max);*/
  ptr++;
  }
  return max;
}


unsigned char find_minimum(unsigned char *ptr, unsigned int size){
  int i;
  unsigned char min;
  min = *ptr;
  for(i = 0; i < size; i++){
    if(*ptr < min){
      min = *ptr;
    }
  ptr++;
  }
  return min;
}

void sort_array(unsigned char *ptr, unsigned int size){
  int i;
  int j;
  unsigned char temp;
  for(i = 0; i < size; i++){
    for(j = i; j < size; j++){

      if( *(ptr+i)< *(ptr+j+1)){
        temp = *(ptr+i);
        *(ptr+i) = *(ptr+j+1);
        *(ptr+j+1) = temp;
      }
    }    
  }
}
    


















/* Add other Implementation File Code Here */
