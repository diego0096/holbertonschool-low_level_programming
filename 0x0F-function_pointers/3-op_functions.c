#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - add function
 * @a: int type
 * @b: int type
 * Return: sum of integers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substract function
 * @a: int type
 * @b: int type
 * Return: subtract of integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply function
 * @a: int type
 * @b: int type
 * Return: multiply of integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two ints
 * @a: int type
 * @b: int type
 * Return: divide of integers
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulos of two ints
 * @a: int type
 * @b: int type
 * Return: modulus of integers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
