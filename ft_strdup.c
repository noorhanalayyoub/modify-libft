/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalayyou <nalayyou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 12:14:48 by nalayyou          #+#    #+#             */
/*   Updated: 2025/12/15 16:56:30 by nalayyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char const *str)
{
	int		index;
	char	*newstring;

	index = 0;
	newstring = malloc(ft_strlen(str) + 1);
	if (str[0] == '\0')
		*newstring = '\0';
	while (str[index])
	{
		newstring[index] = str[index];
		index++;
	}
	newstring[index] = '\0';
	return (newstring);
}
