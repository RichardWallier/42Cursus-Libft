/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:59:09 by rwallier          #+#    #+#             */
/*   Updated: 2022/05/21 11:59:10 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result_node;
	t_list	*temp_node;

	result_node = NULL;
	temp_node = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		temp_node = ft_lstnew(f(lst->content));
		if (!temp_node)
		{
			ft_lstclear(&temp_node, del);
			return (NULL);
		}
		ft_lstadd_back(&result_node, temp_node);
		lst = lst->next;
	}
	return (result_node);
}
