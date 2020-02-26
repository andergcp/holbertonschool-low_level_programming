#include "holberton.h"

/**
 * wildcmp1 - compares two strings.
 * @s1: Pointer to the string
 * @s2: pointer to the string
 * @allow: int
 * Return: Always 0.
 **/

int wildcmp1(char *s1, char *s2, int allow)
{
	if (*s1 != '\0')
	{
		if (*s2 == '*')
		{
			allow = 1;
			return (wildcmp1(s1, s2 + 1, allow));
		}
		else if (*s2 != '\0')
		{
			if (*s1 != *s2)
				if (allow == 1)
					return (wildcmp1(s1 + 1, s2, allow));
				else
					return (0);
			else
			{
				return (wildcmp1(s1 + 1, s2 + 1, allow));
			}

		}
		else
		{
			if (allow == 1)
				if (*(s2 - 1) != '*')
					return (0);
				else
					return (1);
			else
				return (0);
		}
	}
	if (*s2)
	{
		if (*s2 != '*')
			return (0);
		else
			return (wildcmp1(s1, s2 + 1, allow));
	}
	return (1);
}

/**
 * wildcmp - compares two strings.
 * @s1: Pointer to a string
 * @s2: Pointer to a string
 * Return: int
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp1(s1, s2, 0));
}
