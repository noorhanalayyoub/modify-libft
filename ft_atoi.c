/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalayyou <nalayyou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:17:41 by nalayyou          #+#    #+#             */
/*   Updated: 2025/12/15 17:17:51 by nalayyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	answer;
	int	index;
	int	negative;

	negative = 0;
	index = 0;
	answer = 0;
	while (str[index] == '\n' || str[index] == '\t' || str[index] == ' ')
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			negative++;
		index++;
	}
	while (ft_isdigit(str[index]))
	{
		answer *= 10;
		answer += (str[index]) - '0';
		index++;
	}
	if (negative)
		answer *= -1;
	return (answer);
}
/*
int main () {
	int a;
	a = ft_atoi ("      -ggg367282");
	printf("%d" , a);
}*/
