/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:20:03 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/02 09:53:17 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*d;
	char	*h;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = (char *)dest;
	h = (char *)src;
	i = 0;
	while (i < (int)n)
	{
		d[i] = h[i];
		i++;
	}
	return (d);
}
/*
int	main(void)
{
	char	a[11] = "messiburger";
	char	b[11] = "salahpostel";
	char	*c;

	int i = 0;
	c = ft_memcpy(a, b, 5);
	printf("ft_memcpy: %s\n", a);
	c = memcpy(a, b, 5);
	printf("memcpy: %s\n", c);
	return (0);
}
*/
