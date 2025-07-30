/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:25:03 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/02 14:00:58 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lend;
	size_t	lens;

	i = 0;
	lend = ft_strlen(dst);
	lens = ft_strlen((char *)src);
	if (size <= lend)
		return (lens + size);
	while (src[i] != '\0' && i < size - lend - 1)
	{
		dst[i + lend] = src[i];
		i++;
	}
	dst[i + lend] = '\0';
	return (lend + lens);
}
/*
int	main(void)
{
	char	a[20] = "messi";
	const char	b[6] = "Cioa";
	int 	l;
	char	a2[20] = "messi";
	char	b2[6] = "Cioa";
	printf("a: %s\n", a);
	printf("b: %s\n", b);
	l = ft_strlcat(a,b, 7);
	l = strlcat(a2,b2,  7);
	printf("The lenth of the array: %d\n", l);
	printf("the srting: %s\n", a);
	printf("The lenth of the array: %d\n", l);
	printf("the srting: %s\n", a2);
	printf("Controllo finale: %c\n", a[6]);
	printf("menz: %c\n", a2[6]);
	return (0);
}
 */