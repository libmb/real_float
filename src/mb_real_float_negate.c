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
