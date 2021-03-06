/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 09:32:25 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/28 09:32:37 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Returns maximum integer out of two options.
*/

int		ft_maxint(int num1, int num2)
{
	if (num1 > num2)
		return (num1);
	else
		return (num2);
}
