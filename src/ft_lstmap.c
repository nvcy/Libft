/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghad <amerghad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 12:03:20 by amerghad          #+#    #+#             */
/*   Updated: 2026/10/18 17:06:04 by amerghad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
// t_list 	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*current;
// 	t_list	*newcurrent;
// 	t_list	*newlst;
// 	if (!lst)
// 		return (NULL);
// 	current = lst;
// 	newlst = malloc(sizeof(t_list));
// 	if (!newlst)
// 		return (NULL);
// 	newlst->content = f(current->content);
// 	newlst->next = NULL;
// 	newcurrent = newlst;
// 	current = current->next;
// 	while (current)
// 	{
// 		newcurrent->next = malloc(sizeof(t_list));
// 		if (!(newcurrent->next))
// 		{
// 			ft_lstclear(&newlst, del);
// 			return (NULL);
// 		}
// 		newcurrent = newcurrent->next;
// 		newcurrent->content = f(current->content);
// 		newcurrent->next = NULL;
// 		current = current->next;
// 	}
// 	return (newlst);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*current;
	t_list	*new_node;
	void	*content;

	newlst = NULL;
	current = lst;
	while (current)
	{
		content = f(current->content);
		new_node = ft_lstnew(content);
		if (!(new_node))
		{
			del(content);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, new_node);
		current = current->next;
	}
	return (newlst);
}
