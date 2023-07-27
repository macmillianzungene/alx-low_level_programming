#include "main.h"

/**
  * *leet -  encodes a string into 1337.
  *
  * @c: string
  *
  * Return: results
  */
char *leet(char *c)
{
	char *cp = c;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int a;

	while (*c)
	{
		for (a = 0; a < sizeof(key) / sizeof(char); a++)
		{
			/*using 32 since is the difference between lower and uppercase*/
			if (*c == key[a] || *c == key[a] + 32)
			{
				*c = 48 + value[a];
			}
		}
		c++;
	}

	return (cp);
}
