/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mb_real_float_delete.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 00:24:58 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2024/03/14 00:24:59 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mb_real_float.h"

#include <stdlib.h>

void	mb_real_float_delete(t_mb_real *self)
{
	free(self);
}
