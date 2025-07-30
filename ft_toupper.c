/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 08:20:49 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/02 13:50:40 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
int	main(void)
{
	int a = -129;
	int	b;
	int c;
	b = toupper(a);
	
	printf("toupper: the char to convert: %c\n", a);
	printf("toupper: b: %d\n", b);

	c = ft_toupper(a);
	
	printf("ft_toupper: the char to convert: %c\n", a);
	printf("ft_toupper: b: %d\n", c);

	return (0);
}
*/
