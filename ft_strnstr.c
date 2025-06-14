/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: USER <USER@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 00:00:00 by USER              #+#    #+#             */
/*   Updated: 2025/06/13 00:00:00 by USER             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < n && s1[i] != '\0')
	{
		j = 0;
		while (i + j < n && s1[i + j] == s2[j] && s2[j] != '\0')
			j++;
		if (s2[j] == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main() {
// 	const char *haystack = "Hello, world!";
// 	const char *needle = "x";
// 	size_t n = 13; // Length of haystack

// 	char *result = ft_strnstr(haystack, needle, n);
// 	if (result) {
// 		printf("Found: %s\n", result);
// 	} else {
// 		printf("Not found\n");
// 	}

// 	return 0;
// }