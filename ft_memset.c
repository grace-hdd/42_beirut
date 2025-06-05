/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaddad <grhaddad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:21:38 by grhaddad          #+#    #+#             */
/*   Updated: 2025/06/04 16:21:38 by grhaddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memset(void *ptr, int value, unsigned int num)
{
    unsigned char *p;

    p = (unsigned char *)ptr;
    while (num--)
    {
        *p++ = (unsigned char)value;
    }
    return ptr;
}
