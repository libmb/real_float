/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mb_real_float.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 00:25:23 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2024/03/14 00:25:24 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mb_real_float.h"

#include <stddef.h>

#include "mb_real_float_internal.h"

static const t_mb_real		g_zero = {0.0f};
static const t_mb_real		g_one = {1.0f};

static const t_mb_real_type	g_type = {
	NULL,
	mb_real_float_free,
	mb_real_float_clone,
	mb_real_float_assign,
	mb_real_float_add,
	mb_real_float_multiply,
	mb_real_float_negate,
	mb_real_float_is_greater_than_or_equal_to_four,
	&g_zero,
	&g_one,
};

t_mb_real_type	mb_real_float(void)
{
	return (g_type);
}
