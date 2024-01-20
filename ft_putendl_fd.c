/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 23:20:16 by marvin            #+#    #+#             */
/*   Updated: 2024/01/20 19:47:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	len;

	if (!s || fd < 0)
		return ;
	len = ft_strlen(s);
	write(fd, s, len);
	write(fd, "\n", 1);
}
