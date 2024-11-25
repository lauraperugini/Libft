/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauraperugini <lauraperugini@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:18:32 by lperugin          #+#    #+#             */
/*   Updated: 2024/11/24 20:27:04 by lauraperugi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	int		start;
	int		end;

	if (!s)
		return (NULL);
	start = 0;
	while (s[start] == '' || s[start == '\n'] || s[start] == '\t')
		start++;
	end = ft_strlen(s) - 1;
	while (end >= start && (s[end] = '' || s[end] == '\n' || s[end] == '\t'))
		end--;
	if (end < start)
		return (NULL);
	str = (char *)malloc((end - start + 2) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, end - start + 2);
	return (str);
}
