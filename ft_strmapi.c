
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperugin <lperugin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:26:48 by lperugin          #+#    #+#             */
/*   Updated: 2024/11/19 18:26:49 by lperugin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *res;
    size_t len = ft_strlen(s);

    res = malloc((len+1)*sizeof(char));

    if(!res)
        return NULL;
    
    while(i < len)
    {
        res[i] = f(i, s[i]);
        i++;
    }
    res[i] = '\0';

    return res;
}
