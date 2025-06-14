/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 16:28:07 by marvin            #+#    #+#             */
/*   Updated: 2025/06/14 16:28:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;
	size_t	i;

	ptr = malloc (n * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < n * size)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

// #include <stdio.h>
// int main(){
// 	size_t n = 5;
// 	size_t size = sizeof(int);
// 	int *srr = ft_calloc(n , size);
// 	if (srr == NULL)
// 	{
// 		printf("Memory allocation failed\n");
// 		return 1;
// 	}
// 	for (size_t i = 0; i < n; i++)
// 	{
// 		printf("%d ", srr[i]); // Should print 0 for all elements
// 	}
// 	free(srr);
// 	return 0;
// }