/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 22:52:47 by sfiorini          #+#    #+#             */
/*   Updated: 2024/11/25 14:51:44 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	return (0);
}
/* 
int main(void)
{
    
    char c;
    int h;
    int d;

    c = '8';
    h = ft_isdigit(c);
    d = isdigit(c);

    printf("per c = 8\n");
    printf("isdigit: %d\n", d);
    printf("ft_isdigit: %d\n", h);
    c = 'y';
    h = ft_isdigit(c);
    d = isdigit(c);
    printf("per c = y\n");
    printf("isdigit: %d\n", d);
    printf("ft_isdigit: %d\n", d);

    
    return (0);
} */
