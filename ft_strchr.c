/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:21:52 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/02 14:20:25 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != (char)c && s[i])
		i++;
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}

/* int main(void)
{
	int i = 0;
	char a[10] = "Mess0iBur";
	char *b;
	char *d;
	int c = '9';
	b = strchr(a, c);
	printf("strchr: %s\n", b);
	d = ft_strchr(a, c);
	printf("ft_strchr: %s\n", d);
    return (0);
}
  */