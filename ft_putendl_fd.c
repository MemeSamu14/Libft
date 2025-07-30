/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:32:13 by sfiorini          #+#    #+#             */
/*   Updated: 2024/11/25 16:19:36 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
/* 
int	main(void)
{
	int	fd;

	fd = open("test.txt", O_WRONLY | O_CREAT , S_IRUSR | S_IWUSR);
	printf("fd: %d\n", fd);
	if (fd == -1) {
        // print which type of error have in a code
        printf("Error Number % d\n", fd);

        // print program detail "Success or failure"
        perror("Program");
    }
	else
		ft_putendl_fd("ciao", fd);
    return (0);
} */
