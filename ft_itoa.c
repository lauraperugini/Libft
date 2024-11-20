
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperugin <lperugin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:16:17 by lperugin          #+#    #+#             */
/*   Updated: 2024/11/20 17:16:18 by lperugin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_len(long num)
{
	size_t	len;

	len = 0;

	if (num <= 0)
		len = 1;

	while (num != 0)
	{
		num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	num;
	size_t	len;
	char	*str;

	num = n;
	len = ft_len(num);
	str = (char *)malloc(len + 1);

	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (num == 0)
	{
		str[0] = '0';
		return (str);
	}
	while (num > 0)
	{
		str[len--] = (num % 10) + '0';
		num / 10;
	}
	return (str);
}