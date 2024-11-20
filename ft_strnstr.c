
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperugin <lperugin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:40:21 by lperugin          #+#    #+#             */
/*   Updated: 2024/11/19 20:40:22 by lperugin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t pos;
    size_t i;

    if(!needle)
    return ((char*)haystack);

    pos = 0;

    while (haystack[pos] != '\0' && pos < len)
    {
        if(haystack[pos] == needle[0])
        {
            i = 1;
            while(needle[i] != '\0' && haystack[pos + i] == needle[i] && (pos + i) < len)
                i++;
            if(needle[i] == '\0')
                return ((char*)&haystack[pos]);
        }
        pos++;
    }
    return 0;
}