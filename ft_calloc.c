/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaddad <grhaddad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:22:23 by grhaddad          #+#    #+#             */
/*   Updated: 2025/06/04 16:22:23 by grhaddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(unsigned int count, unsigned int size)
{
	unsigned int	total_size;
	void			*ptr;
	unsigned char	*p;

	total_size = count * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	p = (unsigned char *)ptr;
	while (total_size--)
		*p++ = 0;
	return (ptr);
}
