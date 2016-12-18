/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 23:49:04 by tmoska            #+#    #+#             */
/*   Updated: 2016/12/05 23:56:33 by tmoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*str++)
		size++;
	return (size);
}

char 	*ft_strcpy(char *dst, char *src)
{
	char	*tmp;

	tmp = dst;
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = 0;
	return (tmp);
}

char	*ft_strdup(char *src)
{
	char *str;

	if (!src)
		return (0);
	if ((str = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1))))
		ft_strcpy(str, src);
	else
		return (0);
	return (str);
}
