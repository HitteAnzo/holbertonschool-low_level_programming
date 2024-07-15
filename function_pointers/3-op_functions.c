#include"3-calc.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * op_add - Addition. MLP.
 * @a: first arg.
 * @b: second arg.
 * Return: result.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substraction. MLP.
 * @a: first arg.
 * @b: second arg.
 * Return: result.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication.
 * @a: first arg.
 * @b: second arg.
 * Return: result.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division.
 * @a: first arg.
 * @b: second arg.
 * Return: result.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Modulation. MLP.
 * @a: first arg.
 * @b: second arg.
 * Return: result.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
