/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayram <abayram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 21:10:01 by abayram           #+#    #+#             */
/*   Updated: 2026/02/01 01:55:44 by abayram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strncpm(const char *first, const char *second, size_t count)
{	
	int	status;
	int	index;

	index = 0;
	status = 2;
	while (index < count)
	{
		if (status != 0)
		{
			if (first[index] == second[index])
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
