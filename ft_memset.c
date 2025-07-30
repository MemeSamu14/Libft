/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:27:03 by sfiorini          #+#    #+#             */
/*   Updated: 2024/11/25 16:21:22 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memset(void *s, int c, size_t n)
{
	size_t		i;
	char		*d;

	d = s;
	i = 0;
	while (i < n)
	{
		d[i] = c;
		i++;
	}
	return (d);
}
/*
int main(void)
{
	int i = 0;
	char s[10] = "000000";
	char *c;

	c = ft_memset(s,49,3);
	printf("memset: %s\n", s);
	

    return (0);
}
*/