/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:39:41 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/01 13:22:36 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int a)
{
	if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
		return (1024);
	return (0);
}

/* int	main(void)
{
	int b = 0;
	int c = 0;
	char a;
	char v;

	a = 'g';
	v = ')';
	c = isalpha(a);
	b = ft_isalpha(a);
	printf("\n(se e' alfabetico e' 1024 altrimenti e' 0)");
	printf("\nPer a = g\nisalpha: Il valore della stringa a e' %d\n", c);
	printf("ft_isalpha: Il valore della stringa a e' %d\n\n", b);
	c = isalpha(v);
	b = ft_isalpha(v);
	printf("Per a = )\nisalpha: Il valore della stringa a e' %d\n", c);
	printf("ft_isalpha: Il valore della stringa a e' %d\n", b);
	return (0);
} */
