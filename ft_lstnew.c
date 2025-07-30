/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:27:54 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/01 16:02:19 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*a;

	a = (t_list *)malloc(sizeof(t_list) * 1);
	if (a == NULL)
		return (NULL);
	a->content = content;
	a->next = NULL;
	return (a);
}
/* a = (t_list *)malloc(sizeof(t_list) * 1);
	// b = (t_list *)malloc(sizeof(t_list) * 1);
	// c = (t_list *)malloc(sizeof(t_list) * 1);
	// d = (t_list *)malloc(sizeof(t_list) * 1);
	// e = (t_list *)malloc(sizeof(t_list) * 1);
int	main(void)
{
	t_list	*a;
	char	*b = "hello word";
	char	*c;
	a = (t_list *)malloc(sizeof(t_list) * 1);
	a = ft_lstnew(b);
	c = (char *)a->content;
	printf("%s\n", c);
	
	return (0);
} */