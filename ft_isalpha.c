/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmetyunusbayram <ahmetyunusbayram@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 19:58:28 by abayram           #+#    #+#             */
/*   Updated: 2026/02/08 03:02:55 by ahmetyunusb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int value)
{
    if (value >= 'a' && value <= 'z')
    {
        return (1);
    }
    else if (value >= 'A' && value <= 'Z')
    {
        return (1);
    }
    return (0);
}
