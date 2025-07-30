/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:54:53 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/02 09:53:48 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;

	i = 0;
	d = dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest <= src)
	{
		while (i < n)
		{
			d[i] = *((unsigned char *)src + i);
			i++;
		}
	}
	else
	{
		src += n - 1;
		while (n > 0)
		{
			d[n - 1] = *((unsigned char *)src--);
			n--;
		}
	}
	return (d);
}
/* int	main(void)
{
	char	a[11] = "abcdefghi";
	char	b[11] = "abcdefghi";
	char	*c;

	int i = 0;
	c = (char *)ft_memmove(b, b + 5, 1);
	printf("ft_memmove: %s\n", a);
	c = (char *)memmove(a, a + 5, 1);
	printf("   memmove: %s\n", c);
	return (0);
} */
