/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalayyou <nalayyou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:23:51 by nalayyou          #+#    #+#             */
/*   Updated: 2025/12/15 17:25:00 by nalayyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	totlength(char **str, int size, char *sep)
{
	int	index;
	int	j;
	int	count;

	count = 0;
	j = 0;
	index = 0;
	while (index < size)
	{
		j = 0;
		while (str[index][j])
		{
			count++;
			j++;
		}
		index++;
	}
	index = 0;
	while (sep[index])
		index++;
	count += (size - 1) * index;
	count++;
	return (count);
}

void	copystring(int size, char **strs, char *sep, char *joinedstring)
{
	int	index;
	int	j;
	int	m;

	m = 0;
	index = 0;
	j = 0;
	while (index < size)
	{
		j = 0;
		while (strs[index][j])
			joinedstring[m++] = strs[index][j++];
		j = 0;
		if (index < size - 1)
		{
			while (sep[j])
			{
				joinedstring[m] = sep[j];
				j++;
				m++;
			}
		}
		index++;
	}
	joinedstring[m] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		length;
	char	*joinedstring;

	if (size == 0)
	{
		joinedstring = malloc(1);
		joinedstring[0] = '\0';
		return (joinedstring);
	}
	length = totlength(strs, size, sep);
	joinedstring = malloc(length * 1);
	if (!joinedstring)
		return (NULL);
	copystring(size, strs, sep, joinedstring);
	return (joinedstring);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int		a;
// 	char	*strs[] = {"hi", "hi", "hi"};
// 	char	*c;
// 	char	*ptr;

// 	a = 3;
// 	// strs[0] = "hi";
// 	// strs[1]="hioiio" ;
// 	// strs[2]="meoq" ;
// 	c = "aa";
// 	ptr = ft_strjoin(a, strs, c);
// 	printf("%s", ptr);
// 	free(ptr);
// }
