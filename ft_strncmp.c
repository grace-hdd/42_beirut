/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 16:42:54 by marvin            #+#    #+#             */
/*   Updated: 2025/06/14 16:42:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>
// int main() {
// 	// Test cases for ft_strncmp
// 	printf("Test 1: %d\n", ft_strncmp("hello", "hello", 5)); // Expected: 0
// 	printf("Test 2: %d\n", ft_strncmp("hello", "hella", 5)); // Expected: >0
// 	printf("Test 3: %d\n", ft_strncmp("hella", "hello", 5)); // Expected: <0
// 	printf("Test 4: %d\n", ft_strncmp("hello", "helloa", 5)); // Expected: <0
// 	printf("Test 5: %d\n", ft_strncmp("hello", "helloa", 6)); // Expected: <0
// 	printf("Test 6: %d\n", ft_strncmp("", "", 0));           // Expected: 0
// 	return 0;
// }