
#include "get_next_line.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;

	str = malloc(count * size);
	if ((!str))
		return (str);
	ft_memset(str, '\0', count * size);
	return (str);
}

void	*ft_memset(void *ptr, int x, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)ptr)[i] = x;
		i++;
	}
	return (ptr);
}
