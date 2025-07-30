/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_lstadd_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:56:14 by sfiorini          #+#    #+#             */
/*   Updated: 2024/11/27 18:13:05 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

/* int	main(void)
{
	t_list	*a;
	t_list	*b;

	a = (t_list *)malloc(sizeof(t_list) * 1);
	b = (t_list *)malloc(sizeof(t_list) * 1);
	ft_lstadd_front(&a,b);
	return (0);
} */