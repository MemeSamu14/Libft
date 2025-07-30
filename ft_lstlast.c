/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:37:30 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/04 18:31:53 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*a;
	int		i;

	i = 0;
	a = lst;
	while (a != NULL && a->next)
		a = a->next;
	return (a);
}

/*  
int	main(void)
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

	printf("I: %p\n", ft_lstlast(a)->next);
	printf("I: %p\n", ft_lstlast(a)->next);

	return (0);
} */