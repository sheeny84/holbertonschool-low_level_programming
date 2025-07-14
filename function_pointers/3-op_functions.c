#include "3-calc.h"

/**
 * op_add - add two numbers
 * @a: the first number to add
 * @b: the second number to add
 *
 * Return: the result of the addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract one number from another
 * @a: the number to be subtracted from
 * @b: the number to subtract
 *
 * Return: the result of the subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 * @a: the first number for the multiplication
 * @b: the second number for the multiplication
 *
 * Return: the result of the multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide a by b
 * @a: the numerator for the division
 * @b: the denominator for the division
 *
 * Return: the result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: the numerator for the division
 * @b: the denominator for the division
 *
 * Return: the remainder of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}

