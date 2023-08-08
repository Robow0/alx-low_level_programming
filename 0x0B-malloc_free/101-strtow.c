#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * number - function to calculate number of words
 * @str: string being passed to check for words
 *
 * Return: number of words
 */
int number(char *str)
{
	int a, num = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (*str == ' ')
			str++;
		else
		{
			for (; str[a] != ' ' && str[a] != '\0'; a++)
				str++;
			num++;
		}
	}
	return (num);
}
/**
 * free_everything - frees the memory
 * @string: pointer values being passed for freeing
 * @i: counter
 */
void free_everything(char **string, int i)
{
	for (; i > 0;)
		free(string[--i]);
	free(string);
}

/**
 * strtow - function that splits string into words
 * @str: string being passed
 * Return: null if string is empty or null or function fails
 */

char **strtow(char *str);
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, star, end;
	while (*(str + len ))
		len++;
	word = function (str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) *(words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < = len; i++)
	{
		if (str[i] == '\0')
		{
			if(c)
			{
				end = i;
				tmp =  (char *) malloc(sizeof (char) * (c + 1));
				if (tmp == NULL)
					return (null);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix (k) = tmp-c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
