/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grhaddad <grhaddad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:21:04 by grhaddad          #+#    #+#             */
/*   Updated: 2025/06/04 16:21:04 by grhaddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
#include <string.h>

int	ft_atoi(const char *str);
void	ft_bzero(void *s, int n);
void *ft_calloc(size_t n, size_t size);
int	ft_isalnum(char *str);
int	ft_isalpha(char *str);
int	ft_isascii(char *str);
int	ft_isdigit(char *str);
int	ft_isprint(char *str);
char	*ft_itoa(int n);
void *ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, unsigned int n);
void	*ft_memmove(void *dest, const void *src, unsigned int n);
void	*ft_memcpy(void *dest, const void *src, int n);
void	*ft_memset(void *ptr, int value, unsigned int num);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char const *s, int fd);
char	**ft_split(char const *s, char c);
char	*strchr(const char *str, int c);
char *ft_strdup(const char *s);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char *ft_strjoin(char const *s1, char const *s2);
size_t strlcat(char *dst, const char *src, size_t size);
size_t strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(char *str);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*strrchr(const char *str, int c);
char *ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_tolower(char *str);
char	*ft_toupper(char *str);

#endif
