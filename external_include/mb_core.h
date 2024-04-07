/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mb_core.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 23:36:03 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2024/04/08 02:20:05 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MB_CORE_H
# define MB_CORE_H

# include <stddef.h>

# include "mb_core_type.h"

t_mb_err	mb_new(
				t_mb_real_type type,
				size_t exponent,
				size_t max_iteration_count,
				t_mb **out);
t_mb_err	mb(
				t_mb *context,
				const t_mb_real *real,
				const t_mb_real *imaginary,
				size_t *out);
void		mb_free(t_mb *self);

#endif
