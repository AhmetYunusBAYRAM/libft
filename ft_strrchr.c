/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmetyunusbayram <ahmetyunusbayram@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 20:03:25 by abayram           #+#    #+#             */
/*   Updated: 2026/02/08 03:06:12 by ahmetyunusb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *word, int wanted)
{
	int		length;
	unsigned char	c;

	c = (unsigned char)wanted; 
	length = 0;
	while (word[length] != '\0')
	{
		length++;
	}
	while (length >= 0)
	{
		if ((unsigned char)word[length] == c)
		{
			return ((char *)&word[length]);
		}
		length--;
	}
	return (0);
}