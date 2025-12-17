/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalayyou <nalayyou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:27:16 by nalayyou          #+#    #+#             */
/*   Updated: 2025/12/15 17:27:23 by nalayyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	c2;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	index = 0;
	c2 = (unsigned char)c;
	while (index < n)
	{
		if (c2 == ptr[index])
			return ((void *)&ptr[index]);
		index++;
	}
	return (NULL);
}
/*int main () {
  char *a = "hiii";
  bool flag = 0  ;
  if(memchr(a , 'x' , 4)==ft_memchr(a , 'x',4))
  flag = 1;
  printf("%d",flag);
}*/
