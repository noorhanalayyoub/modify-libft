/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalayyou <nalayyou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:06:01 by nalayyou          #+#    #+#             */
/*   Updated: 2025/12/15 17:06:03 by nalayyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*iter;
	t_list	*temp;

	if (!lst || !del || !(*lst))
		return ;
	iter = *(lst);
	temp = iter->next;
	while (iter)
	{
		temp = iter->next;
		del(iter->content);
		free(iter);
		iter = temp;
	}
	(*lst) = NULL;
}
