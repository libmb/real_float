#include "mb_real_float.h"

#include <stdlib.h>

void	mb_real_float_delete(t_mb_real *self)
{
	free(self);
}
