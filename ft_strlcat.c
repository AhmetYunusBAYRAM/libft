/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmetyunusbayram <ahmetyunusbayram@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 18:40:01 by abayram           #+#    #+#             */
/*   Updated: 2026/02/08 03:18:58 by ahmetyunusb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = 0;
    
	while (dst[dst_len] && dst_len < size)
		dst_len++;


	if (dst_len == size)
		return (size + src_len);

	i = 0;
	while (src[i] && (dst_len + i + 1) < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
    
	dst[dst_len + i] = '\0';

	return (dst_len + src_len);
}