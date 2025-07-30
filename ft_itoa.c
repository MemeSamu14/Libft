/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:29:23 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/04 18:21:56 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*case_limit(void)
{
	char	*a;

	a = (char *)malloc(sizeof(char) * 12);
	if (a == NULL)
		return (NULL);
	a[0] = '-';
	a[1] = '2';
	a[2] = '1';
	a[3] = '4';
	a[4] = '7';
	a[5] = '4';
	a[6] = '8';
	a[7] = '3';
	a[8] = '6';
	a[9] = '4';
	a[10] = '8';
	a[11] = '\0';
	return (a);
}

static char	*negative_case(int n)
{
	char	*a;
	int		i;
	int		num;

	n = n * -1;
	num = n;
	i = 1;
	while (num != 0)
	{
		num = num / 10;
		i++;
	}
	a = (char *)malloc(sizeof(char) * (i + 1));
	if (a == NULL)
		return (NULL);
	a[i] = '\0';
	i--;
	while (i > 0)
	{
		a[i] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	a[0] = '-';
	return (a);
}

static char	*zero_and_negative_case(int n)
{
	char	*a;

	if (n == -2147483648)
		return (case_limit());
	if (n == 0)
	{
		a = (char *)malloc(sizeof(char) * 2);
		if (a == NULL)
			return (NULL);
		a[0] = '0';
		a[1] = '\0';
	}
	else
		return (negative_case(n));
	return (a);
}

char	*ft_itoa(int n)
{
	char	*a;
	int		i;
	int		num;

	if (n <= 0)
		return (zero_and_negative_case(n));
	num = n;
	i = 0;
	while (num != 0)
	{
		num = num / 10;
		i++;
	}
	a = (char *)malloc(sizeof(char) * (i + 1));
	if (a == NULL)
		return (NULL);
	a[i] = '\0';
	while (i > 0)
	{
		a[i - 1] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	return (a);
}

/* int	main()
{
	char	*a;

	a = ft_itoa(9);
	printf("Num: %s", a);
	return (0);
} */
