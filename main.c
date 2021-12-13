
#include "get_next_line.h"
#include <stdio.h>
int main(int ac, char **av)
{
    (void) ac;
    (void) av;
    int fd;
    char *str;
    int i;
    
    i = 0;
    fd = open("gnlTester/files/43_no_nl", O_RDONLY);
   // fd = open("bible.txt", O_RDONLY);
   while ((str = get_next_line(fd)) != NULL)
   // while (i < 11)
    {
        printf("%s", str);
        free(str);
        i++;
    }
    //printf("i==%d\n", i);
}