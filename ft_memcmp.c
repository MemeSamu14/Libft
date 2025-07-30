/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:38:13 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/02 15:30:23 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (a[i] > b[i])
			return (1);
		else if (a[i] < b[i])
			return (-1);
		i++;
	}
	return (0);
}
/* 
int	main (void)
{
	char	a[10] = "Messi";
	char	b[10] = "Messi";
	int	i = memcmp(a,b,5);
	int	n = ft_memcmp(a,b,5);

	printf("Memcmp: %d\n",i);
	printf("ft_Memcmp: %d\n",n);
	

	return (0);
}
*/
