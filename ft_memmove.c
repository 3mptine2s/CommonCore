#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t					i;
	unsigned char			*d;
	const unsigned char		*s;
	
	i = len;
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (dst == src || len == 0)
	{
		return (dst);
	}
	if (d > s)
	{
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}

	}
	else
		ft_memcpy(dst, src, len);
	return	(dst);
}
