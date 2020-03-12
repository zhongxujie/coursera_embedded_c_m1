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
 * @file stats.h
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
#ifndef __STATS_H__
#define __STATS_H__
 

/******************************************************************************
 * Function: print_statistics
 * Description:
 *     This function prints the statistics of the given array including minimum, maximum, mean, and median
 * Parameters:
 *     int * ptr: Pointer to a data set
 *     int size: Number of items in data set
 *****************************************************************************/
void print_statistics(unsigned char *ptr, unsigned int size);

/******************************************************************************
 * Function: print_array
 * Description:
 *     This function prints the given array to the screen
 * Parameters:
 *     int * ptr: Pointer to a data set
 *     int size: Number of items in data set
 *****************************************************************************/
void print_array(unsigned char *ptr, unsigned int size);

/******************************************************************************
 * Function: find_median
 * Description:
 *     This function takes a set of numbers and performs finds the median value of
 *     of the set.
 * Parameters:
 *     int * ptr: Pointer to a data set
 *     int size: Number of items in data set
 * Return: 
 *     Median of the numbers provided.
 *****************************************************************************/
float find_median(unsigned char *ptr, unsigned int size);

/******************************************************************************
 * Function: find_mean
 * Description:
 *     This function takes a set of numbers and performs finds the average of
 *     of the set.
 * Parameters:
 *     int * ptr: Pointer to a data set
 *     int size: Number of items in data set
 * Return: 
 *     Average of the numbers provided.
 *****************************************************************************/
float find_mean(unsigned char *ptr, unsigned int size);

/******************************************************************************
 * Function: find_maximum
 * Description:
 *     This function takes a set of numbers and performs finds the maximum value of
 *     of the set.
 * Parameters:
 *     int * ptr: Pointer to a data set
 *     int size: Number of items in data set
 * Return: 
 *     Maximum of the numbers provided.
 *****************************************************************************/

unsigned char find_maximum(unsigned char *ptr, unsigned int size);

/******************************************************************************
 * Function: find_minimum
 * Description:
 *     This function takes a set of numbers and performs finds the minimum value of
 *     of the set.
 * Parameters:
 *     int * ptr: Pointer to a data set
 *     int size: Number of items in data set
 * Return: 
 *     Minimum of the numbers provided.
 *****************************************************************************/

unsigned char find_minimum(unsigned char *ptr, unsigned int size);

/******************************************************************************
 * Function: sort_array
 * Description:
 *     This function sorts the given array from largest to smallest.
 * Parameters:
 *     int * ptr: Pointer to a data set
 *     int size: Number of items in data set
 *****************************************************************************/
void sort_array(unsigned char *ptr, unsigned int size);







#endif /* __STATS_H__ */
