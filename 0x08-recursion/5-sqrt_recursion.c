#include "holberton.h"

/**
 *
 *
 *
 **/

int num_root(int m, int n)
{
        if(m * m == n)
                return(m);
        else if (m == n || n < 0)
		return(-1);
        else
                return(num_root(m + 1, n));
}

/**
 *
 *
 *
 **/

int _sqrt_recursion(int n)
{
        return(num_root(1, n));                                                                                        }
