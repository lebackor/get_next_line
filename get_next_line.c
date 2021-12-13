
#include "get_next_line.h"
#include <stdio.h>

int ft_search_n(char *new_line)
{
    int i;

    i = 0;
    if (!new_line)
        return (1);
    while (new_line[i])
    {
        if (new_line[i] == '\n')
            return (0);
        i++;
    }
    return (1);
}

int ft_reach_0(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *get_next_line(int fd)
{
    int i;
    int k;
    static char *str;
    char *buffer;
    char *new_line;

    i = 1;
    new_line = 0;
    if (!str)
    {
        str = malloc(sizeof(str) * BUFFER_SIZE + 1);
        *str = '\0';
      //  str = ft_calloc((BUFFER_SIZE + 1), sizeof(*str));
    }
    buffer = malloc(sizeof(buffer) * BUFFER_SIZE + 1);
    //buffer = ft_calloc((BUFFER_SIZE + 1), sizeof(*buffer));
    if (ft_strlen(str) > 0)
        new_line = ft_strdup(str);
    while (ft_search_n(new_line) && i > 0)
    {
        i = read(fd, buffer, BUFFER_SIZE);
        if (i < 0)
            return (NULL);
        if (i == 0 && ft_search_n(str) == 1)
        {
           // printf("%s", new_line);
            //if (*str == '\0')
             //   return (NULL);
           /// str = 0;
            str = ft_strcpy(str, &str[ft_reach_0(str)]);
            //free(buffer);
            return (new_line);
        }
        buffer[i] = '\0';
        //printf("q");
        new_line = ft_strjoin(new_line, buffer);
      /*  if (new_line && *str == '\0')
        {
          //  free(str);
            printf("ee");
            free(buffer);
            return (new_line);
        }*/
       // return (new_line);
    }
    k = 0;
    while (new_line[k] && new_line[k] != '\n')
        k++;
    if (new_line[k] == '\n')
    {
        str = ft_strcpy(str, &new_line[++k]);
    }
    new_line[k--] = '\0';
    free(buffer);
    return (new_line);
}
/*
int main(int ac, char **av)
{
    (void) ac;
    (void) av;
    int fd;
    char *str;
    int i;
    
    i = 0;
    fd = open("gnlTester/files/41_with_nl", O_RDONLY);
   while ((str = get_next_line(fd)) != NULL)
   // while (i < 11)
    {
        printf("%s", str);
        free(str);
        i++;
    }
    //printf("i==%d\n", i);
}
*/