
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperugin <lperugin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:25:08 by lperugin          #+#    #+#             */
/*   Updated: 2024/11/18 20:25:11 by lperugin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_substr(const char *s, unsigned int start, size_t len) //vlad poznamky
{
    size_t i;
    char *str;

    if(!s)
    return NULL;

    i = strlen(s);

    if (start >= i)
        return calloc(1, sizeof(char));
    
    if(len > i - start)
        len = i - start;
    
    str = malloc(len + 1);
    if(!str)
        return NULL;
    
    memcpy(str, s + start, len);

    str[len] = '\0';
    
    return str;
}