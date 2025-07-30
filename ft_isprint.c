/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:11:31 by sfiorini          #+#    #+#             */
/*   Updated: 2024/11/25 14:54:30 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	return (0);
}
/*
int main(void)
{
    
    char c;
    int h;
    int d;

    c = 32;
    h = ft_isprint(c);
    d = isprint(c);

    printf("per c = 33 che è printabile\n");
    printf("isprint: %d\n", d);
    printf("ft_isprint: %d\n", h);
    c = 30;
    h = ft_isprint(c);
    d = isprint(c);
    printf("per c = 30 quindi non printable\n");
    printf("isprint: %d\n", d);
    printf("ft_isprint: %d\n", d);

    
    return (0);
}
*/