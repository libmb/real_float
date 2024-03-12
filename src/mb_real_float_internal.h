#include "mb_core_type.h"

void	mb_real_float_free(
			void *context,
			t_mb_real *self);
t_err	mb_real_float_clone(
			void *context,
			t_mb_real *self,
			t_mb_real **out);
t_err	mb_real_float_assign(
			void *context,
			t_mb_real **self,
			t_mb_real *other);
t_err	mb_real_float_add(
			void *context,
			t_mb_real **mut,
			t_mb_real *lhs,
			t_mb_real *rhs);
t_err	mb_real_float_multiply(
			void *context,
			t_mb_real **mut,
			t_mb_real *lhs,
			t_mb_real *rhs);
t_err	mb_real_float_negate(
			void *context,
			t_mb_real **self);
t_err	mb_real_float_is_greater_than_or_equal_to_four(
			void *context,
			t_mb_real *self,
			bool *out);

struct s_mb_real
{
	float	value;
};
