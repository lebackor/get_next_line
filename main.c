/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebackor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:56:33 by lebackor          #+#    #+#             */
/*   Updated: 2022/08/11 15:00:50 by lebackor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int main(int ac, char **av)
{
    (void) ac;
    int fd;
    char *str;
    int i;
    
    i = 0;
    fd = open(av[1], O_RDONLY);
    if (fd == -1)
	  printf("File not found\n");  
    while ((str = get_next_line(fd)) != NULL)
    {
        printf("%s", str);
        free(str);
        i++;
    }
}
