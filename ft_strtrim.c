
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperugin <lperugin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:18:32 by lperugin          #+#    #+#             */
/*   Updated: 2024/11/19 18:18:33 by lperugin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strtrim(const char *s1, const char *set)
{
    int start = 0;
    int end;
    char *str;

    if(!s)
    return NULL;

    while(s[start] == '' || s[start == '\n'] || s[start] == '\t')
        start++;

    end = ft_strlen(s) - 1;

    while(end >= start && (s[end] = '' || s[end] == '\n' || s[end] == '\t'))
        end--;
    
    if(end < start)
        return NULL;
    
    str = (char*)malloc((end - start + 2)*sizeof(char));

    if(!str)
        return NULL;
    
    ft_strlcpy(str, s + start, end - start + 2);
        return str;
}