/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperugin <lperugin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:48:56 by lperugin          #+#    #+#             */
/*   Updated: 2024/11/20 17:49:48 by lperugin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isdigit(char c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}

