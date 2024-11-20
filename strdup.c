
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperugin <lperugin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:29:06 by lperugin          #+#    #+#             */
/*   Updated: 2024/11/11 17:29:07 by lperugin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strdup(const char *s)
{
    char *copy;
    size_t i;

    if (!(copy = malloc(sizeof(char)*ft_strlen(s)+1)))
        return (NULL);

    i = 0;

    while(s[i] !='\0')
    {
        copy[i] = s[i];
        i++;
    }

    copy[i] = '\0';
    return (copy);
}
