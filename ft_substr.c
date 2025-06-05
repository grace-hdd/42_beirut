/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaddad <grhaddad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:21:08 by grhaddad          #+#    #+#             */
/*   Updated: 2025/06/04 16:21:08 by grhaddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
    char			*substr;
    unsigned int	i;
    unsigned int	s_len;

    if (!s)
        return (NULL);
    s_len = strlen(s);
    if (start >= s_len)
    {
        substr = (char *)malloc(1);
        if (!substr)
            return (NULL);
        substr[0] = '\0';
        return (substr);
    }
    if (len > s_len - start)
        len = s_len - start;
    substr = (char *)malloc(sizeof(char) * (len + 1));
    if (!substr)
        return (NULL);
    i = 0;
    while (i < len)
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return (substr);
}
