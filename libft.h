/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayram <abayram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 17:33:50 by abayram           #+#    #+#             */
/*   Updated: 2026/01/30 18:47:09 by abayram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;
char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *word, int search);
char	*ft_strrchr(const char *word, int wanted);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_isalnum(int word);
int		ft_isalpha(int value);
int		ft_isdigit(int number);
int		ft_print(int input_val);
int		ft_atoi(const char *str);
int		ft_toupper(int input_val);
int		ft_tolower(int input_val);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		strncpm(const char *first, const char *second, size_t count);
void	ft_bzero(void *s, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *head, int target, size_t count);
void	*memmove(void *target, const void *head, size_t count);
void	*ft_memchr(const void *sentence, int word, size_t count);
void	*ft_memcpy(void *target, const void *head, size_t count);
size_t	ft_strlen(const char *str);
size_t	fr_strlcat(char *target, const char *head, size_t count);
size_t	ft_strlcpy(char *target, const char *head, size_t count);

#endif
