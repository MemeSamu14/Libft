/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 08:05:51 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/02 12:27:55 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (src == NULL)
	{
		if (size > 0)
			dst[0] = '\0';
		return (0);
	}
	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}
/* int	main(void)
{
	char	a[6] = "Messi";
	char	b[5] = "Ciao";
	char	c[6] = "Messi";
	char	d[5] = "Ciao";
	int 	l;
	int		e;

 	printf("a: %s\n", a);
	printf("b: %s\n", b);
	l = ft_strlcpy(a,b,0);
	e = strlcpy(c,d,0);
	printf("The lenth of the array: %d\n", l);
	printf("the srting: %s\n\n", a);

	printf("The lenth of the array: %d\n", e);
	printf("the srting: %s\n", c);
	
	return (0);
} */
