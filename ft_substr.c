/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 11:14:06 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/02 17:57:29 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;

	i = 0;
	if (start > ft_strlen((char *)s))
		return (ft_strdup(""));
	a = (char *)malloc(sizeof(char) * len + 1);
	if (a == NULL)
		return (ft_strdup(""));
	while (i < len && s[i] != '\0')
	{
		a[i] = s[start];
		i++;
		start++;
	}
	a[i] = '\0';
	return (a);
}
/* int	main(void)
{
	char	a[100] = "lorem ipsum dolor";
	char	*b;
	char	*c;
	b = ft_substr(a,7,10);
	printf ("ft_substring: %s\n", b);
	return (0);
} */