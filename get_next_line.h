#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>


void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *ptr, int x, size_t n);
char	*ft_strdup(char *src);
int	    ft_strlen(char *str);
char	*ft_strjoin(char *s1, char *s2);
#endif