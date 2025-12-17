/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalayyou <nalayyou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:22:40 by nalayyou          #+#    #+#             */
/*   Updated: 2025/12/15 17:23:01 by nalayyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	if (n == 0 || str1 == NULL || str2 == NULL)
		return (0);
	while (*str1 && *str1 == *str2 && n)
	{
		n--;
		str1++;
		str2++;
	}
	if (!n)
		return (0);
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}
