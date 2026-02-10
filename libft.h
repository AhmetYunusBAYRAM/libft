/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmetyunusbayram <ahmetyunusbayram@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 17:33:50 by abayram           #+#    #+#             */
/*   Updated: 2026/02/08 03:15:12 by ahmetyunusb      ###   ########.fr       */
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
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_isalnum(int word);
int		ft_isascii(int number);
int		ft_isalpha(int value);
int		ft_isdigit(int number);
int		ft_lstsize(t_list *lst);
int		ft_isprint(int input_val);
int		ft_atoi(const char *str);
int		ft_toupper(int input_val);
int		ft_tolower(int input_val);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_bzero(void *s, size_t n);
void	ft_putendl_fd(char *s, int fd);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *head, int target, size_t count);
void	*ft_memmove(void *target, const void *head, size_t count);
void	*ft_memchr(const void *sentence, int word, size_t count);
void	*ft_memcpy(void *target, const void *head, size_t count);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *target, const char *head, size_t count);
size_t	ft_strlcat(char *target, const char *head, size_t count);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
#endif
