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

static int	num_length(long n)
{
	int	len;

	len = (n <= 0);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	fill_digits(char *str, long n, int len, int neg)
{
	while (len-- > neg)
	{
		str[len] = n % 10 + '0';
		n /= 10;
	}
	if (neg)
		str[0] = '-';
}

char	*ft_itoa(int nbr)
{
	long	n;
	int		neg;
	int		len;
	char	*str;

	n = nbr;
	neg = (n < 0);
	len = num_length(n);
	if (neg)
		n = -n;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	fill_digits(str, n, len, neg);
	return (str);
}
