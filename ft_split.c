/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 19:09:14 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 18:29:05 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Allocates (with malloc(3)) and returns an array
	of strings obtained by splitting ’s’ using the
	character ’c’ as a delimiter.
	The array must be ended by a NULL pointer.*/

#include "libft.h"
static int	how_many_words( char const *s, char c)
{
	int	words;
	int	skip_if;														//Validates

	words = 0;
	skip_if = 0;
	while (*s)															//Runs through the string
	{
		if (*s != c && skip_if == 0)									//If the first char of the string in the current position isn't the same as c, and skip_if is 0
		{
			words++;
			skip_if = 1;
		}
		else if (s++ && *s == c)										//String moves until the first char of the string is the same as c
			skip_if = 0;												//We might find a new word, so skip_if goes back to 0 and we can now go inside the first if.
	}
	return (words);
}

static const char	*what_if_same_c(char const *s, char c)
{
	while (*s == c)															//If the first char of the string is the same as c
	{
		s++;																//The string goes forward
	}
	return (s);																//Returns the position of the string when it is not a c
}

static void	write_strings(char const *s, const char c, int words,
						char **separated_words)
{
	char	*begining_of_the_word;

	s = what_if_same_c(s, c);												//Checks if it doesn't start with consecutive c
	while (words--)
	{
		begining_of_the_word = ft_strchr(s, c);								//Starts after the first occurence of c
		if (begining_of_the_word != NULL)
		{
			*separated_words = ft_substr(s, 0, begining_of_the_word - s);	//separeted_words gets a string that goes from the start of a word until the first occurence of c
			s = what_if_same_c(begining_of_the_word, c);					//s goees to the beginning of the first word
		}
		else
		{
			*separated_words = ft_substr(s, 0, ft_strlen(s) + 1);
		}
		separated_words++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**separated_words;

	if (!(s))															//Checks for bad parameters
		return (NULL);
	words = how_many_words(s, c);
	separated_words = (char **)ft_calloc((words + 1), sizeof(char *));	//Allocates memory for the words
	if (separated_words == NULL)
		return (NULL);
	write_strings(s, c, words, separated_words);
	return (separated_words);
}
