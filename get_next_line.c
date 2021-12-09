
#include "get_next_line.h"

char *get_next_line(int fd)
{
    int i;
    static char *str;
    char *BUFFER;
    
    BUFFER = ft_calloc(BUFFER_SIZE + 1, sizeof(BUFFER));
    i = read(fd, BUFFER, BUFFER_SIZE);

    return (BUFFER);
}
#include <stdio.h>
int main(int ac, char **av)
{
    (void) ac;

    int fd;

    fd = open("la.txt", O_RDONLY);
    printf("%s\n", get_next_line(fd));
}