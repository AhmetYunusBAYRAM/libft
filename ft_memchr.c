/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayram <abayram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 22:52:26 by abayram           #+#    #+#             */
/*   Updated: 2026/01/24 20:27:59 by abayram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memchr(const void *sentence, int word, size_t count)
{
	size_t	index;
	unsigned char	*string;
	unsigned char	char_character;
	
	string = (unsigned char *)sentence;
	char_character = (unsigned char)word;
	index = 0;
	while(index < count)
	{
		if(string[index] == char_character)
		{
			return ((void *)&string[index]);
		}
		index++;
	}
	return (NULL);
}
