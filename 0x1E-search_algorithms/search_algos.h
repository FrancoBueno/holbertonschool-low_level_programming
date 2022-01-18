#ifndef SEARCH_H
#define SEARCH_H
#include <stdio.h>

/**
 * linear_search - search in linear search
 *@array: array of numbers
 *@size: size of array
 *@value: value to search
 *Return: return index of the value
 */

/*Prototype*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
#endif
