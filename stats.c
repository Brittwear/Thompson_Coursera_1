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

 /* Define varaibles for temporary results and needs */
 unsigned char temp_array[SIZE];
 int i; 

 /* First print out the array so user can see it */
 print_array(test, SIZE);


 /* Now print out the sorted array so user can easily refer to values
  * This part will print out the returned array from sort_array 
  */
 
 /* Copy array so orginal one is not changed */
 for (i = 0; i < SIZE; i++)
    temp_array[i] = test[i];

 printf("This is the original array sorted from largest to smallest \r\n");
 sort_array(temp_array, SIZE);
 for(i = 0; i < SIZE; i++) { 
     printf("Array Index %i = %i \r\n", i, temp_array[i]);
 }  
	
 
 /* Finally print out the required statistics for the given array 
  * This function will call the support functions below */
 print_statistics(test, SIZE);
 

 return 0;

}


 /* Below are the support functions for the above functions */

 /* Print out the given array */
 void print_array(unsigned char * ptr, unsigned int size) {
    printf("Below is the array in the orginal order \r\n"); 
    int i;
    for(i = 0; i < size; i++) { 
        printf("Array Index %i = %i \r\n", i, ptr[i]); 	    
    }			
 }

 /* Sort the given array from large to small */
 void sort_array(unsigned char * ptr, unsigned int length){
  
   int i, j;
   unsigned char temp_value;
	 
   /* Sort the array */
   for (i = 0; i < length - 1; ++i)
      for (j = i + 1; j < length; ++j)
          if (ptr[i] < ptr[j]) {
		  temp_value = ptr[i];
		  ptr[i] = ptr[j];
		  ptr[j] = temp_value;
	  } 
 }

 /* Print out the statistics for the given array */
void print_statistics(unsigned char * input_array, unsigned int size){
     /* Temp value for processing */
     unsigned char max_value;
     unsigned char min_value;
     unsigned char mean_value;
     unsigned char median_value; 
 
     /* Print out the stat values required */
     max_value = find_maximum(input_array, size);
     printf("The max value of the array = %i \r\n", max_value);

     min_value = find_minimum(input_array, size);
     printf("The min value of the array = %i \r\n", min_value);

     mean_value = find_mean(input_array, size);
     printf("The mean value of the array = %i \r\n", mean_value);

     median_value = find_median(input_array, size);
     printf("The median value of the array = %i \r\n", median_value);	     

 }

 /* Find the median vlaue of the given array */
 unsigned char find_median(unsigned  char * ptr, unsigned int length){
    
     unsigned char temp_array[length];
     unsigned char median_value;
     int i;

     /* Copy the input array to temp array so original not changed */
     for(i = 0; i < length; i++)
        temp_array[i] = ptr[i];

     /* Now sort the array so can find middle */
     sort_array(temp_array, length);

     /* Seeing size of the array is even take average of middle 2 values
      * The middle 2 indices of the arry are 19 and 20
      */
     median_value = ((temp_array[19] + temp_array[20]) / 2);

     return median_value;
 }

 /* Find the mean (average) of the given array */
 unsigned char find_mean(unsigned  char * ptr, unsigned int length){
     /* Declare an int to total does not overflow */
     unsigned int temp_total = 0;
     unsigned char average;
     int i;

     for(i = 0; i < length; i++)
        temp_total += ptr[i];

     average = temp_total/length;

     return average;
 }

 /* Find the maximum value in the given array */
 unsigned char find_maximum(unsigned  char * ptr, unsigned int length){
     unsigned char max_value = 0;
     int i;

     for(i = 0; i < length; i++) {
        if (ptr[i] > max_value){
           max_value = ptr[i];
	}
     }

     return max_value;

 }

 /* Find the minumum value in the array */
 unsigned char find_minimum(unsigned  char * ptr, unsigned int length){
     unsigned char min_value = 255;
     int i;

     for(i = 0; i < length; i++) {
        if (ptr[i] < min_value){
	   min_value = ptr[i];
        }
     }

     return min_value;
 }

