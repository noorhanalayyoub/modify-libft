/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalayyou <nalayyou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:20:44 by nalayyou          #+#    #+#             */
/*   Updated: 2025/11/27 15:20:48 by nalayyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *str, int c, size_t a)
{
	size_t			index;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	index = 0;
	while (index < a)
	{
		ptr[index] = c;
		index++;
	}
	return (ptr);
}
