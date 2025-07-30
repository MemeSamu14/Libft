/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:11:31 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/09 13:48:59 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}
/*
int main(void)
{
    char c[10] = "Messi";
    int h;
    int d;
    h = ft_strlen(c);
    d = strlen(c);

    printf("per c = Messi\n");
    printf("strlen: %d\n", d);
    printf("ft_strlen: %d\n", h);
    char z[10] = "Menz";
    h = ft_strlen(z);
    d = strlen(z);
    printf("per c uguale a Menz\n");
    printf("strlen: %d\n", d);
    printf("ft_strlen: %d\n", h);

    return (0);
}
*/