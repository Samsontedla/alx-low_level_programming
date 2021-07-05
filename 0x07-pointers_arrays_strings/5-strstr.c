#include "holberton.h"
/**
 *
 *
 *
 *
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, m, count = 0;
	
	for (i = 0; needle[i] !='\0'; i++)
	{
		for (j = 0 ; haystack[j] != '\0'; j++)
		{
			if (haystack[j] == needle[0])
			{
				for (k = 0 ; k < i; k++)
				{
					if (haystack[j] == needle[k])
					{
						j++;
						count++;
					}
					if (count == i)
					{
						for (m = j - i; haystack[m] != '\0'; m++)
						{
							return (haystack[m]);
						}
					}
				}
			}
		}
	}
	return (0);
}
