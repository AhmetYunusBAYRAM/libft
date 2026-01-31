/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayram <abayram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 20:03:25 by abayram           #+#    #+#             */
/*   Updated: 2026/02/01 01:46:12 by abayram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *word, int wanted)
{
	int	length;

	length = 0;
	while (word[length] != '\0')
	{
		length++;
	}
	while (length >= 0)
	{
		if (word[length] == wanted)
		{
			return ((char *)&word[length]);
		}
		length--;
	}
	return (0);
}
