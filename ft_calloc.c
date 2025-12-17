/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalayyou <nalayyou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:26:41 by nalayyou          #+#    #+#             */
/*   Updated: 2025/12/15 17:26:50 by nalayyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t length, size_t size)
{
	unsigned char	*ptr;
	size_t			index;

	index = 0;
	ptr = malloc(length * size);
	if (!ptr)
		return (NULL);
	while (index < length * size)
	{
		ptr[index] = 0;
		index++;
	}
	return (ptr);
}
/*
int main () {
	int *a;
	a=ft_calloc(3,4);
	printf("%d" , a[0]);
} */
