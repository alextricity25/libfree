/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 19:40:01 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/24 20:56:24 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*buffer;
	size_t		i;

	buffer = ft_strdup(s);
	i = 0;
	while (i < ft_strlen(s))
	{
		buffer[i] = f(i, s[i]);
		i++;
	}
	return (buffer);
}