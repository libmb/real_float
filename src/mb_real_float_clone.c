/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mb_real_float_clone.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 00:24:55 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2024/04/08 02:22:37 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mb_real_float_internal.h"

#include <stdlib.h>

t_mb_err	mb_real_float_clone(
	void *context,
	const t_mb_real *self,
	t_mb_real **out
)
{
	(void)context;
	*out = malloc(sizeof(t_mb_real));
	if (!*out)
		return (true);
	**out = *self;
	return (false);
}
