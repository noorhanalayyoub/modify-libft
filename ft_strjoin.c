/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalayyou <nalayyou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:23:51 by nalayyou          #+#    #+#             */
/*   Updated: 2025/12/17 16:46:40 by nalayyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	totlength(char *str1 , char *str2)
{

}

void	copystring(int size, char **strs, char *sep, char *joinedstring)
{
	
}

char	*ft_strjoin( char *str1 , char *str2)
{
	int		length;
	char	*joinedstring;
	 
if(!str1 || !str2) retunr (NULL) ; 
length = totlength (str1 , str2) ;
jointedstring = malloc ((totlength+1) *sizeof(char) ) ;
if(!joinedstring) return (NULL);  
	if (length == 0)
	{
		joinedstring = malloc(1);
		joinedstring[0] = '\0';
		return (joinedstring);
	}

	
}

// #include <stdio.h>

// int	main(void)
// {
// 	int		a;
// 	char	*strs[] = {"hi", "hi", "hi"};
// 	char	*c;
// 	char	*ptr;

// 	a = 3;
// 	// strs[0] = "hi";
// 	// strs[1]="hioiio" ;
// 	// strs[2]="meoq" ;
// 	c = "aa";
// 	ptr = ft_strjoin(a, strs, c);
// 	printf("%s", ptr);
// 	free(ptr);
// }
