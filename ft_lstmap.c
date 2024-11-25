/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperugin <lperugin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:27:48 by lauraperugi       #+#    #+#             */
/*   Updated: 2024/11/25 18:07:18 by lperugin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*pres;

	if (!lst || !f || !del)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	if (!new)
		return (NULL);
	pres = new;
	lst = lst->next;
	while (lst)
	{
		pres->next = ft_lstnew(f(lst->content));
		if (!pres->next)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		pres = pres->next;
		lst = lst->next;
	}
	return (new);
}
