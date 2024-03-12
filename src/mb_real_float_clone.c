#include "mb_real_float_internal.h"

#include <stdlib.h>

t_err	mb_real_float_clone(
	void *context,
	t_mb_real *self,
	t_mb_real **out
)
{
	(void)context;
	*out = malloc(sizeof(t_mb_real));
	if (!*out)
		return (true);
	**out = *self;
	return (false);
}
