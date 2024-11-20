/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperugin <lperugin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:48:56 by lperugin          #+#    #+#             */
/*   Updated: 2024/11/11 17:25:09 by lperugin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    i = 0;
    
    if( size > 0)
    {
    while(src[i] && i < size - 1)
    { 
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    }
    while(src[i])
       i++;
        return(i);
}

int main()
{
    char dest[10] = "Hello";
    char src[] = "Hello, World!";
    unsigned int len = ft_strlcpy(dest, src, 15);
    printf("des: %s, length: %u\n", dest, len);
    return 0;
}
