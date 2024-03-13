/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mb_real_float_get.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 00:25:05 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2024/03/14 00:25:06 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mb_real_float.h"

#include "mb_real_float_internal.h"

float	mb_real_float_get(t_mb_real *from)
{
	return (from->value);
}
