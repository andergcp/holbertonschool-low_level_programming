#include "holberton.h"

int _isalpha(int c)
{
	if (c > 96 && c < 123)
		return(1);
	else if (c > 64 && c < 91)
		return(1);
	else if (c > 48 && c < 58)
                return(1);
	else
		return(0);
	return(0);
}
