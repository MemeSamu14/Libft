/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 12:25:59 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/07 10:19:49 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*a;
	t_list	*b;

	b = NULL;
	while (lst)
	{
		a = ft_lstnew(f(lst->content));
		if (a->content == NULL)
		{
			del(a->content);
			free(a);
		}
		lst = lst->next;
		ft_lstadd_back(&b, a);
	}
	return (b);
}
