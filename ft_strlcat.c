/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayram <abayram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 18:40:01 by abayram           #+#    #+#             */
/*   Updated: 2026/02/01 01:56:26 by abayram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	fr_strlcat(char *target, const char *head, size_t count)
{
	size_t	target_len;
	size_t	head_len;
	size_t	index_first;
	size_t	index_second;

	target_len = ft_strlen(head);
	head_len = ft_strlen(target);
	if (count <= target_len)
		return (count + target_len);
	index_first = head_len;
	index_second = 0;
	while (head[index_second] && (index_first + 1) < count)
	{
		target[index_first] = head[index_second];
		index_first++;
		index_second++;
	}
	target[index_first] = '\0';
	return (target_len + head_len);
}
