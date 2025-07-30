/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:50:29 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/01 13:15:36 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*d;

	d = (char *)s;
	i = 0;
	while (i < (int)n)
	{
		d[i] = 0;
		i++;
	}
}

/*int	main(void)
{
	int i = 0;
	char a[11] = "messiburger";
	char b[11] = "messiburger";

	bzero(a, 5);
	printf("bzero: %s", a);
	ft_bzero(b, 5);
	while (i < 10)
	{
		printf("%c",a[i]);
		i++;
	}
	printf("\n");
	i = 0;
	printf("ft_bzero: %s", a);
	while (i < 10)
	{
		printf("%c",b[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
