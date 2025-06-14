/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 16:30:46 by marvin            #+#    #+#             */
/*   Updated: 2025/06/14 16:30:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;

	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	const char str[] = "Hello, world";
// 	const char ch = 'o';
// 	char *result;

// 	result = ft_memchr(str, ch, sizeof(str));
// 	if (result != NULL)
// 	{
// 		printf("%ld\n", result - str);
// 	}
// 	else
// 	{
// 		printf("Not found\n");
// 	}
// }