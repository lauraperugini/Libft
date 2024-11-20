/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperugin <lperugin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:48:56 by lperugin          #+#    #+#             */
/*   Updated: 2024/11/11 17:24:14 by lperugin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_memset(void *s, int c, size_t len)
{
    unsigned char *str = (unsigned char *)s;
    
    while (len--){
        *str++ = (unsigned char) c;
        str++;
    }
    return (s);
}













/*void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr = s; // cast the void (pointer to anything) pointer char (byte by byte)
    
    for(size_t i = 0; i < n; i++){
        ptr[i] = (unsigned char)c;
    }
    return s;
}

int main()
{
    char arr[8];
    ft_memset(arr, 'B', 3);
    printf("%s", arr);
    
    return 0;
    
}*/

