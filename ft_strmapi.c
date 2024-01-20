/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 23:21:01 by marvin            #+#    #+#             */
/*   Updated: 2024/01/20 19:47:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*res;

	if (!s || !f)
		return (NULL);
	len = ft_strlen((char *)s);
	i = 0;
	res = (char *)ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	return (res);
}
