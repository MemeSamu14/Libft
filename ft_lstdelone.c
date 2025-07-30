/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:51:30 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/01 11:18:37 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

/* static void	del(void	*a)
{
	ft_calloc(ft_strlen((char *)a), sizeof(a));
}  */
/* 
int	main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;
	t_list	*d;
	t_list	*e;

	// a = (t_list *)malloc(sizeof(t_list) * 1);
	// b = (t_list *)malloc(sizeof(t_list) * 1);
	// c = (t_list *)malloc(sizeof(t_list) * 1);
	// d = (t_list *)malloc(sizeof(t_list) * 1);
	// e = (t_list *)malloc(sizeof(t_list) * 1);

	// a->next = b;
	// b->next = c;
	// c->next = d;
	
	void (*ptr)(void *) = &del;
	t_list **lst = (t_list **)malloc(sizeof(t_list *) * 2);
	char *s = (char *)malloc(sizeof(char) * 6);
	s[0] = 'm';
	s[1] = 'e';
	s[2] = 's';
	s[3] = 's';
	s[4] = 'i';
	s[5] = '\0';
	b = ft_lstnew(s);
	a = ft_lstnew("siummm");
	ft_lstadd_front(lst, b);
	ft_lstadd_front(lst, a);
	// printf("e      : %p\n", e);
	// printf("d prima: %s\n", (char *)b->content);
	ft_lstdelone(*lst, ptr);
	// printf("d dopo : %p\n", b->content);

	return (0);
} */