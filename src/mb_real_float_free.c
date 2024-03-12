#include "mb_real_float_internal.h"

#include <stdlib.h>

void	mb_real_float_free(
	void *context,
	t_mb_real *self
)
{
	(void)context;
	free(self);
}
