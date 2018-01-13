/* $Id$ */
/* memory management */

#include "nullmpi.h"

int MPI_Alloc_mem(MPI_Aint size, MPI_Info info, void *baseptr)
{
  NULLMPI_STATS;
  return nullmpi_unsupported();
}
