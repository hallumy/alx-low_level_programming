#include <stdio.h>

void hare_and_tortoise(void)__attribute__ ((constructor));

/**
 * hare_and_tortoise - Prints a string before the main
 *			function is executed
 */

void hare_and_tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
