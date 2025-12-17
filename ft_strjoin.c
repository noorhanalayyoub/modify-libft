/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalayyou <nalayyou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:23:51 by nalayyou          #+#    #+#             */
/*   Updated: 2025/12/17 16:51:17 by nalayyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	totlength(char *str1, char *str2)
{
	int	length;
	int	index;

	length = 0;
	index = 0;
	while (str1[index])
	{
		index++;
		length++;
	}
	index = 0;
	while (str2[index])
	{
		index++;
		length++;
	}
	return (length);
}

void	copystring(int length, char *str1, char *str2, char *joinedstring)
{
	int	index;
	int	j;

	j = 0;
	index = 0;
	while (str1[j])
	{
		joinedstring[index] = str1[j];
		j++;
		index++;
	}
	j = 0;
	while (index < length && str2[j])
	{
		joinedstring[index] = str2[j];
		j++;
		index++;
	}
	joinedstring[length] = '\0';
}

char	*ft_strjoin(char *str1, char *str2)
{
	int		length;
	char	*joinedstring;

	if (!str1 || !str2)
		return (NULL);
	length = totlength(str1, str2);
	joinedstring = malloc((length + 1));
	if (!joinedstring)
		return (NULL);
	if (length == 0)
	{
		joinedstring = malloc(1);
		joinedstring[0] = '\0';
		return (joinedstring);
	}
	copystring(length, str1, str2, joinedstring);
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
