#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - creates random passwords
 * 
 * Return: 0
 * */

int main(void)
{
	char randomletter;
	int i;
	char pwd[100];
    
	srand(time(0));
	
    
	for (i = 0; i < 10; i++)
	{
		randomletter = 33 + (rand() % 90);
		pwd[i] = randomletter;
		printf("%c", pwd[i]);
	}
	printf("%s", pwd);
	
	return (0);
}
/**
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

**
 * main - creates a password of sum 2772
 *
 * Return:0;
 */
/**
int main(void)
{
	int i, r, sum;
	char array[63] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char password[100];

	srand(time(NULL));
	sum = 0;
	i = 0;
	while (sum < (2772 - 122))
	{
		r = rand() % 62;
		password[i] = array[r];
		sum = sum + password[i];
		i++;
	}
	r = 2772 - sum;
	password[i] = r;
	i++;
	password[i] = '\0';
	printf("%s", password);
	return (0);
}
**/
