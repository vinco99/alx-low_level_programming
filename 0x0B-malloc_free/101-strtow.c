#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - the lenght of words
 * @str: string
 *
 * Return: an int
 */
int word_len(char *str)
{
	int i, len = 0;

	i = 0;
	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * count_words - count words
 * @str: string
 *
 * Return: an int
 */
int count_words(char *str)
{
	int i = 0, words = 0, len = 0;

	for (i = 0; *(str + i); i++)
	{
		len++;
	}

	for (i =  0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i += word_len(str + i);
		}
	}
	return (words);
}

/**
 * strtow - splits strings into words
 * @str: string
 *
 * Return: strings
 */
char **strtow(char *str)
{
	char **strings;
	int index = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}

	words = count_words(str);
	if (words == 0)
	{
		return (NULL);
	}

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
	{
		return (NULL);
	}

	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
		{
			index++;
		}

		letters =  word_len(str + index);
		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
			{
				free(strings[w]);
			}

			free(strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
		{
			strings[w][l] = str[index++];
		}
		strings[w][l] = '\0';
	}
	strings[w] = NULL;
	return (strings);
}
