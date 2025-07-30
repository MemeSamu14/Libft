/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:25:50 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/01 13:23:23 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* int main(void)
{

    int c;
    int d;

    printf("per c = 128\n");
    c = 128;
    d = isascii(c);
    printf("isascii: %d\n", d);
    d = ft_isascii(c);
    printf("isascii: %d\n", d);


    printf("per c = 127\n");
    c = 127;
    d = isascii(c);
    printf("isascii: %d\n", d);
    d = ft_isascii(c);
    printf("isascii: %d\n", d);
    return (0);
} */
