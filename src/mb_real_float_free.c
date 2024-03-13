/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mb_real_float_free.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 00:25:02 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2024/03/14 00:25:02 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mb_real_float_internal.h"

#include <stdlib.h>

void	mb_real_float_free(
	void *context,
	t_mb_real *self
)
{
	(void)context;
	free(self);
}
