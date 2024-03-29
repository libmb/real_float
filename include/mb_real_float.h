/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mb_real_float.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 00:25:27 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2024/03/14 00:25:28 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MB_REAL_FLOAT_H
# define MB_REAL_FLOAT_H

# include "mb_core_type.h"

t_mb_real_type	mb_real_float(void);

t_mb_real		*mb_real_float_new(float from);
float			mb_real_float_get(t_mb_real *from);
void			mb_real_float_delete(t_mb_real *self);

#endif
