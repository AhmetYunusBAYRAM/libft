/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmetyunusbayram <ahmetyunusbayram@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 19:30:25 by abayram           #+#    #+#             */
/*   Updated: 2026/02/08 04:15:57 by ahmetyunusb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;
    size_t total;
	

    if (count == 0 || size == 0)
        return (malloc(0));

    if (count > SIZE_MAX / size)
        return (NULL);

    total = count * size;
    ptr = malloc(total);
    if (!ptr)
        return (NULL);

    ft_bzero(ptr, total);
    return (ptr);
}
