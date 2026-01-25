/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayram <abayram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 22:52:26 by abayram           #+#    #+#             */
/*   Updated: 2026/01/25 18:24:48 by abayram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *sentence, int word, size_t count)
{
	unsigned char	*string;
	unsigned char	char_character;	

	string = (unsigned char *)sentence;
	char_character = (unsigned char)word;
	while (count > 0)
	{
		if (*string == char_character)
		{
			return ((void *)string);
		}
		count--;
		string++;
	}
	return (NULL);
}
