/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:37:42 by sfiorini          #+#    #+#             */
/*   Updated: 2024/12/04 18:54:43 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_print(int nb, int fd)
{
	int	c;
	int	n;

	c = nb;
	n = c % 10;
	if (c == 0)
		return ;
	c = c / 10;
	ft_print(c, fd);
	n = n + 48;
	write(fd, &n, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n == 0)
		write(fd, "0", 1);
	else if (n < 0)
	{
		write(fd, "-", 1);
		ft_print(n * -1, fd);
	}
	else
		ft_print(n, fd);
}

/* int	main(void)
{
	int	fd;

	fd = open("test.txt", O_WRONLY | O_CREAT , S_IRUSR | S_IWUSR);
	printf("fd: %d\n", fd);
	if (fd == -1) {
        printf("Error Number % d\n", fd);
        perror("Program");
    }
	else
		ft_putnbr_fd(589, fd);
    return (0);
} */
