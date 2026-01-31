/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayram <abayram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 02:06:19 by abayram           #+#    #+#             */
/*   Updated: 2026/02/01 02:08:53 by abayram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	cnt;

	cnt = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			cnt++;
		while (*s && *s != c)
			s++;
	}
	return (cnt);
}

static char	**free_all(char **split, int i)
{
	while (i >= 0)
		free(split[i--]);
	free(split);
	return (NULL);
}

static char	**fill_split(char **lst, char const *s, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			lst[j] = ft_substr(s, start, i - start);
			if (!lst[j++])
				return (free_all(lst, j - 2));
		}
	}
	lst[j] = NULL;
	return (lst);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;

	if (!s)
		return (NULL);
	lst = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!lst)
		return (NULL);
	return (fill_split(lst, s, c));
}
