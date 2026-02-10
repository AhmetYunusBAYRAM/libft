/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayram <abayram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 19:06:47 by abayram           #+#    #+#             */
/*   Updated: 2026/02/01 01:46:19 by abayram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int input_val)
{
	if (input_val >= 'a' && input_val <= 'z')
	{
		return (input_val - 32);
	}
	return (input_val);
}
