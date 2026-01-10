/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oayyoub <oayyoub@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:53:24 by oayyoub           #+#    #+#             */
/*   Updated: 2024/10/28 10:54:12 by oayyoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*_dest;
	unsigned char	*_src;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	_dest = (unsigned char *)dest;
	_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		_dest[i] = _src[i];
		i++;
	}
	return (dest);
}
