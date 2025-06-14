/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaddad <grhaddad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:21:29 by grhaddad          #+#    #+#             */
/*   Updated: 2025/06/04 16:21:29 by grhaddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar_fd(char c, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

// int main()
// {
// 	// Example usage of ft_putnbr_fd
// 	ft_putnbr_fd(42, 1); // Writes "42" to standard output (file descriptor 1)
// 	ft_putchar_fd('\n', 1); // Writes a newline character
// 	ft_putnbr_fd(-2147483648, 1); // Writes "-2147483648" to standard output
// 	ft_putchar_fd('\n', 1); // Writes a newline character
// 	return 0;
// }