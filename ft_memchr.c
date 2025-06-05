/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaddad <grhaddad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:21:43 by grhaddad          #+#    #+#             */
/*   Updated: 2025/06/04 16:21:43 by grhaddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *ptr, int value, int num)
{
	const unsigned char	*p;

	p = (const unsigned char *)ptr;
	while (num--)
	{
		if (*p == (unsigned char)value)
			return ((void *)p);
		p++;
	}
	return (0);
}
