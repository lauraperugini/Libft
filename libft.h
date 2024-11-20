
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperugin <lperugin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:36:45 by lperugin          #+#    #+#             */
/*   Updated: 2024/11/11 17:36:46 by lperugin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBF_H

#define FT_INT_MIN -2147483648
#define FT_INT_MAX  2147483647

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;

} t_list;

// all ft - give em a proper order pls (divide char, int, void etc.)

#endif


