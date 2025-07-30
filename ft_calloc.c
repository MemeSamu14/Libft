/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 20:19:55 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/02 12:55:10 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*a;

	a = malloc(size * nmemb);
	if (a == NULL)
		return (NULL);
	ft_bzero(a, size * nmemb);
	return (a);
}
/* int	main(void)
{
	char	*a;
	char	*b;

	a = (char *)calloc(a, 5);
	b = (char *)ft_calloc(b, 5);
	printf("calloc: %s\n", a);
	printf("ft_calloc: %s\n", a);


	return (0);
} */