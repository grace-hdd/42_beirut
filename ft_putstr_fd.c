/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaddad <grhaddad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:21:28 by grhaddad          #+#    #+#             */
/*   Updated: 2025/06/04 16:21:28 by grhaddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char const *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

// int main()
// {
// 	// Example usage of ft_putstr_fd
// 	ft_putstr_fd("Hello, World!", 1);
// 	ft_putstr_fd("\n", 1);
// 	return 0;
// }