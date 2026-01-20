/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayram <abayram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 21:10:01 by abayram           #+#    #+#             */
/*   Updated: 2026/01/20 21:22:15 by abayram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	strncpm(const char *word_first, const char *word_second, size_t count)
{	
	int	status;
	int	index;

	index = 0;
	status = 2;
	while (index < count)
	{
		if (status != 0)
		{
			if (word_first[index] == word_second[index])
			{
				status = 1;
			}
			else
			{
				status = 0;
			}
		}
		index++;
	}
	return (status);
}
