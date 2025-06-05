/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaddad <grhaddad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:21:15 by grhaddad          #+#    #+#             */
/*   Updated: 2025/06/04 16:21:15 by grhaddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *str, const char *substr, int len)
{
	int	i;
	int	j;

	if (!str || !substr)
		return (0);
	if (!*substr)
		return ((char *)str);
	i = 0;
	while (str[i] && i < len)
	{
		if (str[i] == substr[0])
		{
			j = 0;
			while (substr[j] && str[i + j] && (i + j) < len)
			{
				if (str[i + j] != substr[j])
					break ;
				j++;
			}
			if (!substr[j])
				return ((char *)&str[i]);
		}
		i++;
	}
	return (0);
}
