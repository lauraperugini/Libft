/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperugin <lperugin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:48:56 by lperugin          #+#    #+#             */
/*   Updated: 2024/11/11 17:23:47 by lperugin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void *ft_memmove(void *des, const void *src, size_t n)
{
    unsigned char *d = (unsigned char*)des;
    unsigned char *s = (unsigned char*)src;

    if(s < d)
    {
        while(n--)
        d[n] = s[n];
    }
    
    else
    {
        while(n--)
        *d++ = *s++;
    }
    return(des);
}