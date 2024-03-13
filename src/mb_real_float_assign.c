#include "mb_real_float_internal.h"

t_err	mb_real_float_assign(
	void *context,
	t_mb_real **self,
	const t_mb_real *other
)
{
	(void)context;
	**self = *other;
	return (false);
}
