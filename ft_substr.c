/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmetyunusbayram <ahmetyunusbayram@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 01:51:18 by abayram           #+#    #+#             */
/*   Updated: 2026/02/08 03:54:37 by ahmetyunusb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t i = 0;
    size_t sl = 0;

    if (!s)
        return (NULL);
    while (s[sl])
        sl++;

    if (start >= sl)
        len = 0;
    else if (len > sl - start)
        len = sl - start;

    str = malloc(len + 1);
    if (!str)
        return (NULL);

    while (i < len)
    {
        str[i] = s[start + i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

