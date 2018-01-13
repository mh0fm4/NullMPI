/* $Id$ */
/* memory management */

#include "nullmpi.h"

int MPI_Free_mem(void *base)
{
  NULLMPI_STATS;
  return nullmpi_unsupported();
}
