/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaddad <grhaddad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:21:35 by grhaddad          #+#    #+#             */
/*   Updated: 2025/06/04 16:21:35 by grhaddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main()
// {
// 	// Example usage of ft_putchar_fd
// 	ft_putchar_fd('3', 1); // Writes 'A' to standard output (file descriptor 1)
// 	ft_putchar_fd('\n', 1); // Writes a newline character
// 	return 0;
// }