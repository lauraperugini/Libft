
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperugin <lperugin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:25:19 by lperugin          #+#    #+#             */
/*   Updated: 2024/11/11 17:25:20 by lperugin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
    const char *str;

    str = s;

    while (s >= str)
        if(*s-- == (char)c)
        return((char*)s+1);

    return(NULL);
}
