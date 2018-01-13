/* $Id$ */
/* one-side communication */

#include "nullmpi.h"

int MPI_Win_fence(int assert, MPI_Win win)
{
  NULLMPI_STATS;
  return nullmpi_unsupported();
}
