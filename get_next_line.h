#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

int BUFFER_SIZE = 0;

void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *ptr, int x, size_t n);

#endif