/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalayyou <nalayyou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:18:07 by nalayyou          #+#    #+#             */
/*   Updated: 2025/12/15 17:18:09 by nalayyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static void	free_split(char **ptr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

static int	countstrings(char *str, char sep)
{
	int	index;
	int	count;
	int	flag;

	flag = 1;
	index = 0;
	count = 0;
	while (str[index])
	{
		if (str[index] != sep)
		{
			if (flag)
				count++;
			flag = 0;
		}
		else
			flag = 1;
		index++;
	}
	return (count);
}

static char	*copystring(char *str, int start, int end)
{
	int		j;
	char	*new_string;

	new_string = malloc(end - start + 1);
	if (!new_string)
		return (NULL);
	j = 0;
	while (start < end)
	{
		new_string[j] = str[start];
		start++;
		j++;
	}
	new_string[j] = '\0';
	return (new_string);
}

static int	smallallocate(int numofstrings, char *str, char sep, char **ptr)
{
	int	index;
	int	start;
	int	end;

	start = 0;
	end = 0;
	index = 0;
	while (index < numofstrings)
	{
		while (str[start] && str[start] == sep)
			start++;
		end = start;
		while (str[end] && str[end] != sep)
			end++;
		ptr[index] = copystring(str, start, end);
		if (!ptr[index])
		{
			free_split(ptr, index);
			return (0);
		}
		start = end;
		index++;
	}
	return (1);
}

char	**ft_split(char *str, char sep)
{
	int		numofstrings;
	char	**ptr;

	numofstrings = countstrings(str, sep);
	ptr = malloc((numofstrings + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	ptr[numofstrings] = NULL;
	if (smallallocate(numofstrings, str, sep, ptr) == 0)
		return (NULL);
	return (ptr);
}
