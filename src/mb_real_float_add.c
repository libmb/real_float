#include "mb_real_float_internal.h"

t_err	mb_real_float_add(
	void *context,
	t_mb_real **self,
	t_mb_real *lhs,
	t_mb_real *rhs
)
{
	(void)context;
	(*self)->value = lhs->value + rhs->value;
	return (false);
}
