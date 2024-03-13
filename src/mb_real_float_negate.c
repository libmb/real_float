/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mb_real_float_negate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 00:25:17 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2024/03/14 00:25:17 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mb_real_float_internal.h"

t_err	mb_real_float_negate(
	void *context,
	t_mb_real **self
)
{
	(void)context;
	(*self)->value = -(*self)->value;
	return (false);
}
