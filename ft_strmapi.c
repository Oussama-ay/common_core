/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oayyoub <oayyoub@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:08:48 by oayyoub           #+#    #+#             */
/*   Updated: 2024/10/29 20:51:14 by oayyoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		size;
	int		i;
	char	*result;

	if (!s || !f)
		return (0);
	if (*s == '\0')
		return (ft_strdup(""));
	size = ft_strlen(s);
	result = malloc(size + 1);
	if (!result)
		return (0);
	i = 0;
	while (i < size)
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = 0;
	return (result);
}
/*
#include <stdio.h>
#include <string.h>
char	hana(unsigned int i, char c)
{
	c += i;
	return (c);
}

int main(int argc, char const *argv[])
{
	char	*s = " abcdef";
	printf("before : %s.\n", s);
	printf("after : %s.\n", ft_strmapi(s, hana));
	return (0);
}
*/
