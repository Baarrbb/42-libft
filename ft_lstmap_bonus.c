/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:21:22 by marvin            #+#    #+#             */
/*   Updated: 2024/01/20 19:47:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*tmp;
	void	*cont;

	if (!lst)
		return (NULL);
	ret = NULL;
	while (lst)
	{
		cont = (*f)(lst->content);
		tmp = ft_lstnew(cont);
		if (!tmp)
		{
			(*del)(cont);
			ft_lstclear(&ret, (*del));
			return (NULL);
		}
		ft_lstadd_back(&ret, tmp);
		lst = lst->next;
	}
	return (ret);
}
