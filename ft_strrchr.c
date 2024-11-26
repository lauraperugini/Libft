/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauraperugini <lauraperugini@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:25:19 by lperugin          #+#    #+#             */
/*   Updated: 2024/11/26 00:26:17 by lauraperugi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;

	ret = NULL;
	if (s == NULL)
		return (NULL);
	while (*s)
	{
		if (*s == (unsigned char)c)
		{
			ret = (char *)s;
		}
		s++;
	}
	if (c == '\0')
	{
		ret = (char *)s;
	}
	return (ret);
}
