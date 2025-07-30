/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:13:49 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/04 18:26:40 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*a;

	a = lst;
	i = 0;
	while (a != NULL)
	{
		a = a->next;
		i++;
	}
	return (i);
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

	printf("I: %d\n", ft_lstsize(a));

	return (0);
} */