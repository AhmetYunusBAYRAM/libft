/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayram <abayram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 17:43:10 by abayram           #+#    #+#             */
/*   Updated: 2026/01/18 15:25:48 by abayram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*memcpy(void *target, const void *head, size_t count)
{
	unsigned char	*char_target;
	unsigned char	*char_head;
	unsidged int	index;

	char_target = (unsigned char *)target;
	char_head = (unsigned char *)head;
	index = 0;
	while (index < count)
	{
		target[index] = head[index];
		index++;
	}
	return (target);
}
