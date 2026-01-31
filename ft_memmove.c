/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayram <abayram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 20:30:22 by abayram           #+#    #+#             */
/*   Updated: 2026/02/01 01:56:48 by abayram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *target, const void *head, size_t count)
{
	unsigned char	*char_target;
	unsigned char	*char_head;

	if (target == NULL && head == NULL)
	{
		return (NULL);
	}
	char_target = (unsigned char *)target;
	char_head = (unsigned char *)head;
	if (char_target > char_head)
	{
		while (count--)
		{
			char_target[count] = char_head[count];
		}
	}
	else
	{
		while (count--)
		{
			*char_target++ = *char_head++;
		}
	}
	return (target);
}
