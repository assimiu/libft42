/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <amane@studente.42lisboa.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:48:55 by amane             #+#    #+#             */
/*   Updated: 2022/03/02 16:13:49 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_str(const char *str)
{
	unsigned int		pos;

	pos = 0;
	while (str[pos] != 0)
		pos ++;
	return (pos);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	size_dest;
	unsigned int	pos;
	unsigned int	size_src;
	char			*apt_dst;
	unsigned int	size;

	size = (int) dstsize;
	apt_dst = dst;
	size_dest = 0;
	pos = 0;
	size_src = 0;
	size_dest = size_str(apt_dst);
	size_src = size_str(src);
	if (size <= size_dest)
		size_src += size;
	else
		size_src += size_dest;
	while (src[pos] != 0 && (size_dest + 1) < size)
	{
		apt_dst[size_dest] = src[pos];
		size_dest++;
		pos++;
	}
	apt_dst[size_dest] = 0;
	return (size_src);
}
