#include "mb_real_float_internal.h"

t_err	mb_real_float_is_greater_than_or_equal_to_four(
	void *context,
	t_mb_real *self,
	bool *out
)
{
	(void)context;
	*out = self->value >= 4.0f;
	return (false);
}
