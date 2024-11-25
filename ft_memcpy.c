/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauraperugini <lauraperugini@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:32:11 by lperugin          #+#    #+#             */
/*   Updated: 2024/11/24 20:22:51 by lauraperugi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *des, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!des || !src)
		return (NULL);
	d = (unsigned char *)des;
	s = (unsigned char *)src;
	while (n--)
	{
		*d++ = *s++;
	}
	return (des);
}
