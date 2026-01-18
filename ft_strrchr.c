/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayram <abayram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 20:03:25 by abayram           #+#    #+#             */
/*   Updated: 2026/01/18 20:09:17 by abayram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchar(const char *word, int wanted)
{
	int	length;
	length = 0;

	while (word[length] != '\0')
	{
		length++;
	}

	while (length >= 0)
	{
		if(word[length] == wanted)
		{
			return (&word[length]);
		}
		length--;
	}
	return (0);
}
