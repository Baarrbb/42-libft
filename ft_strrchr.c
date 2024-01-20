/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 23:21:13 by marvin            #+#    #+#             */
/*   Updated: 2024/01/20 19:47:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		count;

	str = (char *)s;
	s = (char *)s;
	count = ft_strlen(s) - 1;
	str += count;
	while (count > -1)
	{
		if ((unsigned char)*str == (unsigned char)c)
		{
			s += count;
			return ((char *)s);
		}
		str--;
		count--;
	}
	if (!(unsigned char)c)
	{
		count = ft_strlen(s);
		s += count;
		return ((char *)s);
	}
	return (NULL);
}
