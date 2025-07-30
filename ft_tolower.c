/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 08:20:49 by sfiorini          #+#    #+#             */
/*   Updated: 2024/11/21 10:16:57 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	if (c <= (-2) && c >= -128)
		c = 256 + c;
	return (c);
}
/*
int	main(void)
{
	int a =  91;
	int	b;
	int c;
	b = tolower(a);
	
	printf("tolower: the char to convert: %c\n", a);
	printf("tolower: b: %d\n", b);

	c = ft_tolower(a);
	
	printf("ft_tolower: the char to convert: %c\n", a);
	printf("ft_tolower: b: %d\n", c);

	return (0);
}
*/
