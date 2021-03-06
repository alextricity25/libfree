/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 18:00:16 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/25 15:06:59 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Checks to see if a character is a valid digit.
*/

int		ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}
