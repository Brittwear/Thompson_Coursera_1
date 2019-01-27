/******************************************************************************
 * @file stats.c
 * @brief File for Intro-Embedded-Systems Peer-graded Assignment 1
 *
 * @author Herbert Thompson
 * @date 2019-1-27
 *
 * A simple C-Programming example that exhibits a handful of basic c-programming
 * features to show how to calculate some statistics on a set of numbers and 
 * display the information
 *     -Print the statistics
 *     -Print the array
 *     -Find the median
 *     -Find the mean
 *     -Find the maximum
 *     -Find the minimum
 *     -Sort the array
 *
 *****************************************************************************/ 

/****************************************************************************
* Copyright (C) 2019 by Herbert Thompson 
*
* Redistribution, modification or use of this software in source or binary
* forms is permitted as long as the files maintain this copyright. Users are 
* permitted to modify this and use it to learn about the field of embedded
* software. Herbert Thompson is not liable for any
* misuse of this material.
* 
********************************************************************************

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


#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main() {

 unsigned char test[SIZE] = {  34, 201, 190, 154,   8, 194,   2,   6,
                              114,  88,  45,  76, 123,  87,  25,  23,
                              200, 122, 150,  90,  92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};


 /* First print out the array so user can see it */
 print_array(test, SIZE);


 /* Now print out the sorted array so user can easily refer to values
  * This part will print out the returned array from sort_array 
  */
 sort_array(test, SIZE);
	
 /* Finally print out the required statistics for the given array 
  * This function will call the support functions below */
 print_statistics();
 

 return 0;

}


 /* Below are the support functions for the above functions */

 /* Print out the given array */
 void print_array(unsigned char * ptr, unsigned int size){
	 ;
 }

 /* Sort the given array from large to small */
 unsigned char * sort_array(unsigned char * ptr, unsigned int length){
	 ;
 }

 /* Print out the statistics for the given array */
 void print_statistics(void){
	;
  }

 /* Find the median vlaue of the given array */
 unsigned char find_median(unsigned  char * ptr, unsigned int length){
	;
 }

 /* Find the mean of the given array */
 unsigned char find_mean(unsigned  char * ptr, unsigned int length){
	 ;
 }

 /* Find the maximum value in the given array */
 unsigned char find_maximum(unsigned  char * ptr, unsigned int length){
	 ;
 }

 /* Find the minumum value in the array */
 unsigned char find_minimum(unsigned  char * ptr, unsigned int length){
	 ;
 }

