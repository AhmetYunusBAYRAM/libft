/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayram <abayram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 19:10:54 by abayram           #+#    #+#             */
/*   Updated: 2026/02/01 01:56:46 by abayram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *head, int target, size_t count)
{
	unsigned char	*head_char;
	size_t			i;

	head_char = (unsigned char *)head;
	i = 0;
	while (i < count)
	{
		head_char[i] = (unsigned char)target;
		i++;
	}
	return (head_char);
}
