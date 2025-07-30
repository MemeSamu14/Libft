/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 19:22:34 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/10 18:16:07 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *ptr)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	while (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || \
	*ptr == '\v' || *ptr == '\f' || *ptr == '\r')
		ptr++;
	if (*ptr == '+' || *ptr == '-')
	{
		if (*ptr == '-')
			sign = -1;
		ptr++;
	}
	while (*ptr >= 48 && *ptr <= 57)
	{
		res = res * 10 + (*ptr - '0');
		ptr++;
	}
	return (res * sign);
}
/*
int	main(void)
{
	int	i;
	const char a[100] = "2147483647";
	
	i = atoi(a);
	printf("atoi: %d\n", i);
	i = ft_atoi(a);
	printf("ft_atoi: %d\n", i);

	return (0);
}
int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	n;

	i = 0;
	n = 0;
	sign = 0;
	while (nptr[i] == ' ' || ((nptr[i] >= 9) && (nptr[i] <= 13)))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	if (nptr[i - 1] == '-')
		sign = 1;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		n = (n * 10) + (nptr[i] - 48);
		i++;
	}
	if (sign == 1)
		n = n * -1;
	return (n);
}

 */