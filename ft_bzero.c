/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalayyou <nalayyou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:20:22 by nalayyou          #+#    #+#             */
/*   Updated: 2025/11/27 15:20:26 by nalayyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *str, size_t a)
{
	size_t			index;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	index = 0;
	while (index < a)
	{
		ptr[index] = '\0';
		index++;
	}
}
