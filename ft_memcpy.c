/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayram <abayram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 17:43:10 by abayram           #+#    #+#             */
/*   Updated: 2026/02/01 01:45:43 by abayram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memcpy(void *target, const void *head, size_t count)
{
	unsigned char	*char_target;
	unsigned char	*char_head;

	if (head == NULL && target == NULL)
	{
		return (NULL);
	}
	char_target = (unsigned char *)target;
	char_head = (unsigned char *)head;
	while (count--)
	{
		*char_target++ = *char_head++;
	}
	return (target);
}
