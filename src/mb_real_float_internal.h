/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mb_real_float_internal.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 00:25:08 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2024/03/14 00:27:23 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MB_REAL_FLOAT_INTERNAL_H
# define MB_REAL_FLOAT_INTERNAL_H

# include "mb_core_type.h"

void	mb_real_float_free(
			void *context,
			t_mb_real *self);
t_err	mb_real_float_clone(
			void *context,
			const t_mb_real *self,
			t_mb_real **out);
t_err	mb_real_float_assign(
			void *context,
			t_mb_real **self,
			const t_mb_real *other);
t_err	mb_real_float_add(
			void *context,
			t_mb_real **mut,
			const t_mb_real *lhs,
			const t_mb_real *rhs);
t_err	mb_real_float_multiply(
			void *context,
			t_mb_real **mut,
			const t_mb_real *lhs,
			const t_mb_real *rhs);
t_err	mb_real_float_negate(
			void *context,
			t_mb_real **self);
t_err	mb_real_float_is_greater_than_or_equal_to_four(
			void *context,
			const t_mb_real *self,
			bool *out);

struct s_mb_real
{
	float	value;
};

#endif
