/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayram <abayram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 19:15:35 by abayram           #+#    #+#             */
/*   Updated: 2026/02/01 01:46:16 by abayram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int input_val)
{
	if (input_val >= 'A' && input_val <= 'Z')
	{
		return (input_val + 32);
	}
	return (input_val);
}
