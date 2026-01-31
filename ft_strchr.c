/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayram <abayram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 19:24:06 by abayram           #+#    #+#             */
/*   Updated: 2026/02/01 01:45:53 by abayram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *word, int search)
{
	unsigned char	char_to_find;

	char_to_find = (unsigned char)search;
	while (*word != '\0')
	{
		if (*word == char_to_find)
		{
			return ((char *)word);
		}
		word++;
	}	
	if (char_to_find == '\0')
	{
		return ((char *)word);
	}
	return (0);
}
