/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:18:29 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/04 16:47:25 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*s;
	size_t		i;
	size_t		j;
	size_t		k;

	j = (ft_strlen((char *)s1) + ft_strlen((char *)s2));
	s = (char *)malloc(sizeof(char) * (j + 1));
	if (s == NULL)
		return (NULL);
	k = 0;
	while (k < ft_strlen((char *)s1))
	{
		s[k] = s1[k];
		k++;
	}
	i = 0;
	while (k < j)
	{
		s[k] = s2[i];
		i++;
		k++;
	}
	s[k] = '\0';
	return (s);
}

/* int	main(void)
{
	char	a[200] = "lorem ipsum";
	char	b[200] = "dolor sit amet";
	char	*c;
	
	c = ft_strjoin(a,b);
	printf("ft_strjoin: %s\n", c);
	return(0);
}  */
