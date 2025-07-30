/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:25:31 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/02 17:24:51 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*f;
	unsigned char	chr;

	i = 0;
	f = (unsigned char *)s;
	chr = (unsigned char)c;
	while (i < n)
	{
		if (f[i] == chr)
			return ((void *)f + i);
		i++;
	}
	return (NULL);
}
/*int	main(void)
{
	char	a[10] = "Mes0i";
	char	x[10] = "Mes0i"; 
	char	b = '0';
	char	*s;
	
	
	s = (char *)ft_memchr("",2+256,2);
	printf("The result: %s\n", s);
	s = (char *)memchr("",2+256,2);
	printf("The result: %s\n", s);
	return (0);
}*/