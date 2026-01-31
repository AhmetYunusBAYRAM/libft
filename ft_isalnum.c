/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayram <abayram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 22:15:29 by abayram           #+#    #+#             */
/*   Updated: 2026/02/01 01:45:21 by abayram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int word)
{
	if (word >= 'a' && word <= 'z')
		return (1);
	else if (word >= 'A' && word <= 'Z')
		return (1);
	else if (word >= '0' && word <= '9')
		return (1);
	else
		return (0);
}
