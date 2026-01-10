/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oayyoub <oayyoub@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:43:05 by oayyoub           #+#    #+#             */
/*   Updated: 2024/10/28 10:54:20 by oayyoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*_dest;
	unsigned char	*_src;
	size_t			i;

	if (!dest && !src)
		return (0);
	_dest = (unsigned char *)dest;
	_src = (unsigned char *)src;
	if (_dest > _src && _dest < _src + n)
	{
		while (n--)
			_dest[n] = _src[n];
		return (dest);
	}
	i = 0;
	while (i < n)
	{
		_dest[i] = _src[i];
		i++;
	}
	return (dest);
}
