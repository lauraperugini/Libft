/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperugin <lperugin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:48:56 by lperugin          #+#    #+#             */
/*   Updated: 2024/11/11 17:24:20 by lperugin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t dest_len = strlen(dest);
    size_t src_len = strlen(src);

    if(size <= dest_len){
        return(size + src_len);
    }

    size_t i;
    size_t j;
    
    for(i = dest_len, j = 0; i < size - 1 && src[j] != '\0'; i++, j++){
        dest[i] = src[j];
    }
    dest[i] = '\0';
    return dest_len + src_len;
}

int main()
{
    char dest[10] = "Hello"; // dest buffer
    char src[] = "World!"; // src string
    size_t size = sizeof(dest); // tot size of the dest buffer (10 bytes)

    //call the fct

    ft_strlcat(dest, src, size);

    //output the resulting string
    printf("Resulting string: \"%s\"\n", dest);

    return 0;
}