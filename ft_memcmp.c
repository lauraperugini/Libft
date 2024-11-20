
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperugin <lperugin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:19:47 by lperugin          #+#    #+#             */
/*   Updated: 2024/11/19 19:19:48 by lperugin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *str1;
    unsigned char *str2;

    if ( n == 0)
     return 0;

    str1 = (unsigned char*)s1;
    str2 = (unsigned char*)s2;

    i = 0;

    while (*str1 == *str2 && i++ < n)
    {
        str1++;
        str2++;
    }

    return ((int)(*str1 - *str2));
}
