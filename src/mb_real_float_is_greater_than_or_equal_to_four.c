/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mb_real_float_is_greater_than_or_equal_to_four.c   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 00:25:11 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2024/03/14 00:25:12 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mb_real_float_internal.h"

t_err	mb_real_float_is_greater_than_or_equal_to_four(
	void *context,
	const t_mb_real *self,
	bool *out
)
{
	(void)context;
	*out = self->value >= 4.0f;
	return (false);
}
