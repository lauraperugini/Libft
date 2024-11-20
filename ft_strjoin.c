
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperugin <lperugin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:55:15 by lperugin          #+#    #+#             */
/*   Updated: 2024/11/18 20:55:16 by lperugin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strjoin(const char *s1, const char *s2)
{
    size_t i;
    size_t all_size;
    char *str;

    if(!s1 || !s2)
    {
        if(s1)
        return s1;

        else if(s2)
        return s2;

        else
        return NULL;
    }

    all_size = strlen(s1) + strlen(s2);

    str = (char*)malloc(all_size + 1)* sizeof(char);

    if(!str)
    return NULL;

    i = 0;
     while(*s1)
      str[i++] = *s1++;

    while(*s2)
        str[i++] = *s2++;

    str[i] = '\0';

    return str;
}

