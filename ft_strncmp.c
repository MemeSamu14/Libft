/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:55:42 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/02 14:52:34 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return (s11[i] - s22[i]);
}
/* int main(void)
{
	char a[5] = "messi";
	char b[5] = "messi";
	char d[5] = "mersi"; 
	int c;

	c = strncmp("1234", "1235", 4);
	printf("   strncmp: %d\n", c);
	c = ft_strncmp("1234", "1235", 4);
	printf("ft_strncmp: %d\n", c);
	c = strncmp(a, d, 5);
	printf("   strncmp: %zu\n", c);
	c = ft_strncmp(a, d, 5);
	printf("ft_strncmp: %zu\n",c);
 
	return (0);
} */
