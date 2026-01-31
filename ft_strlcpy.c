/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayram <abayram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 22:32:16 by abayram           #+#    #+#             */
/*   Updated: 2026/02/01 01:46:00 by abayram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *target, const char *head, size_t count)
{
	size_t	target_count;
	size_t	index;

	target_count = 0;
	index = 0;
	while (head[target_count] != '\0')
	{
		target_count++;
	}
	if (count == 0)
	{
		return (target_count);
	}
	while (head[index] != '\0' && index < (count - 1))
	{
		target[index] = head[index];
		index++;
	}
	target[index] = '\0';
	return (target_count);
}
