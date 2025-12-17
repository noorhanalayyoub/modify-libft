/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalayyou <nalayyou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 15:57:53 by nalayyou          #+#    #+#             */
/*   Updated: 2025/12/03 12:27:56 by nalayyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	size_t	length;
	size_t	index;

	length = ft_strlen(str);
	index = 0;
	while (index <= length)
	{
		if (c == str[index])
			return ((char *)(&str[index]));
		index++;
	}
	return (NULL);
}
/*int	main(void)
{
	char	a[] = "hii";
	char	*mainptr;

	mainptr = ft_strchr(a, 'i');
	printf("%c", *mainptr);
}*/
