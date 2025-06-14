/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaddad <grhaddad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:21:23 by grhaddad          #+#    #+#             */
/*   Updated: 2025/06/04 16:21:23 by grhaddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

#include <stdio.h>
void print_char(unsigned int index, char *c) {
	printf("Index: %u, Char: %c\n", index, *c);
}
int main() {
	char str[] = "hello";
	ft_striteri(str, print_char);
	return 0;
}