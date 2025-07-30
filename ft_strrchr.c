/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:21:52 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/07 13:30:55 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (s[i] != (char)c && i > 0)
		i--;
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}
/*
int main(void)
{
	int i = 0;
	char a[10] = "Mess0iBu0r";
	char *b;
	char *d;
	int c = '0';
	b = strrchr(a, c);
	printf("strrchr: %s\n", b);
	d = ft_strrchr(a, c);
	printf("ft_strrchr: %s\n", d);
    return (0);
}
*/