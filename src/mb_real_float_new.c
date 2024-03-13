#include "mb_real_float.h"

#include <stdlib.h>

#include "mb_real_float_internal.h"

t_mb_real	*mb_real_float_new(float from)
{
	t_mb_real *const	result = (t_mb_real *)malloc(sizeof(t_mb_real));

	if (!result)
		return (NULL);
	result->value = from;
	return (result);
}
