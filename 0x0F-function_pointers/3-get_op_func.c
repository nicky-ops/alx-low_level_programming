#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  * *get_op_func - pointer to a function
  * @s - operator passed as argument
  * @op_t: struct typedef
  * @i: int type
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

    for (i = 0; i < 6; i++)
    {

