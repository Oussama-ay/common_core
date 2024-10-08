#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	j;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (!dest && size == 0)
		return (src_len);
	if (size <= dst_len)
		return (src_len + size);
	j = 0;
	while (j < size - dst_len - 1 && src[j])
	{
		dest[j + dst_len] = src[j];
		j++;
	}
	dest[j + dst_len] = 0;
	return (dst_len + src_len);
}
