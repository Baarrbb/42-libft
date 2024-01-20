/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 23:20:04 by marvin            #+#    #+#             */
/*   Updated: 2024/01/20 19:47:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;

	if (!dest && !src)
		return (NULL);
	s = (char *)src;
	d = (char *)dest;
	if (s < d)
	{
		s += n;
		d += n;
		while (n--)
		{
			*--d = *--s;
		}
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dest);
}
