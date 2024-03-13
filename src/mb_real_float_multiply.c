/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mb_real_float_multiply.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 00:25:14 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2024/03/14 00:25:14 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mb_real_float_internal.h"

t_err	mb_real_float_multiply(
	void *context,
	t_mb_real **self,
	const t_mb_real *lhs,
	const t_mb_real *rhs
)
{
	(void)context;
	(*self)->value = lhs->value * rhs->value;
	return (false);
}
