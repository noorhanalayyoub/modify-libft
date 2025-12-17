/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalayyou <nalayyou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:18:24 by nalayyou          #+#    #+#             */
/*   Updated: 2025/12/15 17:19:54 by nalayyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	j;

	index = 0;
	j = 0;
	if (!(needle[0]))
		return ((char *)haystack);
	while (haystack[index] && index < len)
	{
		while (index + j < len && haystack[index + j] && haystack[index
			+ j] == needle[j])
			j++;
		if (!(needle[j]))
			return ((char *)&haystack[index]);
		index++;
		j = 0;
	}
	return (NULL);
}
