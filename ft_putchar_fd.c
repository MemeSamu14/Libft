/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:53:29 by sfiorini          #+#    #+#             */
/*   Updated: 2024/11/25 11:20:27 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int	main(void)
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
		ft_putchar_fd('c', fd);
    return 0;
} */
