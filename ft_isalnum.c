/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:25:50 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/01 13:21:57 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) != 0 || ft_isalpha(c) != 0)
		return (8);
	return (0);
}
/* 
int main(void)
{
    char c;
    int d;
    
    c = 'L';
    d = isalnum(c);
    printf("isalnum: %d\n", d);
    d = ft_isalnum(c);
    printf("ft_isalnum: %d\n", d);
    return (0);
} */
