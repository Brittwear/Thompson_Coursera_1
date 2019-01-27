/********************************************************************************
* Copyright (C) 2019 by Herbert Thompson 
*
* Redistribution, modification or use of this software in source or binary
* forms is permitted as long as the files maintain this copyright. Users are 
* permitted to modify this and use it to learn about the field of embedded
* software. Herbert Thompson is not liable for any
* misuse of this material.
* 
********************************************************************************/

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
 * @brief Header file for array statistics for assignment 1 for Intro Embedded 
 *        Systems Course
 *
 * This header file contains the declarations for the required functions
 * for assignment 1 in the Coursera Introduction Embedded Systems course.
 *
 * @author Herbert Thompson 
 * @date   January 27 2019
 *
 */

#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints out the statistics for the supplied array 
 * 
 * This function prints out to the screen the required
 * statictics for assignment 1 supplied array.
 *
 * @param void 
 *
 * @return void
 */
void print_statistics(void);

/**
 * @brief Prints out the array to the screen
 * 
 * Given an array and the size of the array as inputs
 * this function will print this array out to the screen
 *
 * @param ptr Pointer to data array
 * @param size Length of the  data array
 *
 * @return void
 */
void print_array(unsigned char * ptr, unsigned int size);

/**
 * @brief Calculates the median value of the given array 
 * 
 * Given an array and the length of the array as inputs
 * this function will return the median value of the array
 *
 * @param ptr Pointer to data array
 * @param length Length of the array
 *
 * @return Median of the array
 */
unsigned char find_median(unsigned  char * ptr, unsigned int length);

/**
 * @brief Calculates the mean value of the given array 
 * 
 * Given an array and the length of the array as inputs
 * this function will return the mean value of the array
 *
 * @param ptr Pointer to data array
 * @param length Length of the array
 *
 * @return Mean of the array
 */
unsigned char find_mean(unsigned  char * ptr, unsigned int length);

/**
 * @brief Calculates the maximum value in the given array 
 * 
 * Given an array and the length of the array as inputs
 * this function will return the maximum value in the array
 *
 * @param ptr Pointer to data array
 * @param length Length of the array
 *
 * @return Maximum value in the array
 */
unsigned char find_maximum(unsigned  char * ptr, unsigned int length);

/**
 * @brief Calculates the mimimum value in the given array 
 * 
 * Given an array and the length of the array as inputs
 * this function will return the minimum value in the array
 *
 * @param ptr Pointer to data array
 * @param length Length of the array
 *
 * @return Minimum value in the array
 */
unsigned char find_minimum(unsigned  char * ptr, unsigned int length);

/**
 * @brief Sorts the given array from largest to smallest value
 * 
 * Given an array and the length of the array as inputs
 * this function will sort the array from largest to smallest value
 * and return that array
 *
 * @param ptr Pointer to data array
 * @param length Length of the array
 *
 * @return prt A pointer to the sorted array
 */
unsigned char * sort_array(unsigned char * ptr, unsigned int length);

#endif /* __STATS_H__ */

