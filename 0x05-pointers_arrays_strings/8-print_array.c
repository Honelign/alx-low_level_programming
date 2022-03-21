#include <stdio.h>
#include "holberton.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
int main(void)
{
	int array[6];

	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;
	array[5] = -200003;
	print_array(array, 6);
	return (0);
}
