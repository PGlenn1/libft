/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:55:57 by gpiriou           #+#    #+#             */
/*   Updated: 2021/01/06 14:55:58 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	unsigned int i;
	char *str;

	i = 0;
	if (!(str = malloc(len * sizeof(char))))
		return (NULL);
	while (i < len)	
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}