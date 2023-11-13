/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaptari <gcaptari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:48:16 by gcaptari          #+#    #+#             */
/*   Updated: 2023/11/13 16:33:47 by gcaptari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stdint.h>
# include <stdio.h>

typedef struct s_bypass_trim
{
	size_t	len_start;
	size_t	len_end;
}	t_bypass_trim;

int		ft_tolower(int c);
int		ft_toupper(int c);
int	ft_atoi(const char *str);

char	*ft_substr(const char *str, unsigned int start, size_t end);

size_t	ft_strlen(const char *str);
void	*ft_calloc(size_t count, size_t size);

void	*ft_memchr(const void *v1, int c, size_t n);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strstr(const char *haystack, const char *neddle);

char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
int		ft_memcmp(const void *v1, const void *v2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *dest, int c, size_t n);
void	ft_bzero(void *s, size_t n);

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);

#endif