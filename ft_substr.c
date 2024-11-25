/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauraperugini <lauraperugini@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:25:08 by lperugin          #+#    #+#             */
/*   Updated: 2024/11/24 20:31:46 by lauraperugi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	i = strlen(s);
	if (start >= i)
		return (calloc(1, sizeof(char)));
	if (len > i - start)
		len = i - start;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	memcpy(str, s + start, len);
	str[len] = '\0';
	return (str);
}
