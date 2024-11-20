
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperugin <lperugin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:11:21 by lperugin          #+#    #+#             */
/*   Updated: 2024/11/19 18:11:22 by lperugin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memchr(const void *str, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;

	while (n--)
		if (*str++ == (unsigned char)c)
			return (str - 1);

	return (NULL);
}

