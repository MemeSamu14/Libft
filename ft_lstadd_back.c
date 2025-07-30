/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:42:34 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/04 18:37:47 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*a;

	if (lst != NULL && lst[0] != NULL)
	{
		a = ft_lstlast(*lst);
		a->next = new;
	}
	else
		*lst = new;
}

/* int	main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;
	t_list	*d;
	t_list	*e;

	a = (t_list *)malloc(sizeof(t_list) * 1);
	b = (t_list *)malloc(sizeof(t_list) * 1);
	c = (t_list *)malloc(sizeof(t_list) * 1);
	d = (t_list *)malloc(sizeof(t_list) * 1);
	e = (t_list *)malloc(sizeof(t_list) * 1);

	a->next = b;
	b->next = c;
	c->next = d;
	printf("e      : %p\n", e);
	printf("d prima: %p\n", d->next);
	ft_lstadd_back(&d, e);
	printf("d dopo : %p\n", d->next);

	return (0);
} */