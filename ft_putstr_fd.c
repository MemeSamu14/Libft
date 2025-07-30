/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:02:35 by sfiorini          #+#    #+#             */
/*   Updated: 2024/11/25 16:20:27 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
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
		ft_putstr_fd("ciao", fd);
    return (0);
} */
