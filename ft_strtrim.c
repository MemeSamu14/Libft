/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:59:47 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/09 15:29:23 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	found_pointer_right(const char *s1, const char *set)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		k = 0;
		while (set[k] != '\0')
		{
			if (s1[i] == set[k])
				break ;
			k++;
		}
		if (set[k] == '\0')
			return (i);
		i++;
	}
	return (i);
}

static int	found_pointer_left(const char *s1, const char *set)
{
	int	i;
	int	k;

	i = ft_strlen((char *)s1) - 1;
	k = 0;
	while (i >= 0)
	{
		k = 0;
		while (set[k] != '\0')
		{
			if (s1[i] == set[k])
				break ;
			k++;
		}
		if (set[k] == '\0')
			return (i);
		i--;
	}
	return (-1);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		start;
	int		end;
	int		len;
	int		i;
	char	*a;

	i = 0;
	end = found_pointer_left(s1, set);
	start = found_pointer_right(s1, set);
	if (end == -1 || start > end)
		return (ft_strdup(""));
	len = end - start + 1;
	a = (char *)malloc(sizeof(char) * (len + 1));
	if (a == NULL)
		return (NULL);
	while (start <= end)
	{
		a[i] = s1[start];
		start++;
		i++;
	}
	a[i] = '\0';
	return (a);
}

/*  int main()
{
	char *s1 = "\0 \t \n  pro\0va\nprova \n\n\n\t\0\0\0\0";
 	char *s2 = "";
 	char *ret = ft_strtrim(s1, "\0");
 
 	printf("ret: %s\n", ret);


    return (0);
} */