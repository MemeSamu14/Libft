/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 11:05:32 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/02 17:36:42 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*a;
	int		i;

	i = 0;
	while (s[i])
		i++;
	a = (char *)malloc(sizeof(char) * (i + 1));
	if (a == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		a[i] = s[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
/*
int	main(void)
{
	const char	a[100] = "Messi Hamburger";
	char	*b;
	char	*c;

	b = strdup(a);
	printf ("   strdup: %s\n", b);
	c = strdup(a);
	printf ("ft_strdup: %s\n", c);
	return (0);
}
*/
