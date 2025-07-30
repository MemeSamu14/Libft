/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:43:14 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/02 17:14:52 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;	

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		k = 0;
		while (big[i + k] == little[k] && little[k] && ((i + k) < len))
			k++;
		if (k == ft_strlen((char *)little))
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*s1 = "oh no not the empty string !";
	char	*s2 = "";
	char	*s;
	char	*d;
	s = strnstr (s1, s2, 0);
	d = ft_strnstr (s1, s2, 0);

	printf("   strnstr: %s\n",s);
	printf("ft_strnstr: %s\n",d);

	return (0);
} 
  */