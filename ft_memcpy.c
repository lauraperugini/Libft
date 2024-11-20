
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperugin <lperugin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:32:11 by lperugin          #+#    #+#             */
/*   Updated: 2024/11/11 16:32:12 by lperugin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_memcpy(void *des, const void *src, size_t n)
{
    unsigned char *d = (unsigned char*)des;
    unsigned char *s = (unsigned char*)src;

    if(!des && !src)
    return(des);

    while(n--)
    *d++ = *s++;

    return (des);
}
