/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:33:51 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/04 18:24:13 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*array;
	unsigned int		i;

	i = 0;
	while (s[i])
		i++;
	array = (char *)malloc(sizeof(char) * (i + 1));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		array[i] = (f(i, s[i]));
		i++;
	}
	array[i] = '\0';
	return (array);
}
