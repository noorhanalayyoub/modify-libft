/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalayyou <nalayyou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 16:44:47 by nalayyou          #+#    #+#             */
/*   Updated: 2025/12/15 17:55:16 by nalayyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	placenums(char *ans, int neg, int n, int length)
{
	while (length > 0)
	{
		ans[length] = n % 10 + '0';
		length--;
	}
	if (neg)
		ans[0] = '-';
	else
		ans[0] = n % 10 + '0';
}

char	*ft_itoa(int n)
{
	int		length;
	int		temp;
	int		neg;
	char	*ans;

	neg = 0;
	length = 0;
	temp = n;
	if (!n)
		return (ft_strdup("0"));
	while (temp)
	{
		length++;
		temp = temp / 10;
	}
	if (n < 0)
	{
		neg = 1;
		n *= -1;
		length++;
	}
	ans = malloc(length + 1);
	placenums(ans, neg, n, length);
	return (ans);
}
