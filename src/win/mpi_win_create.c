/* $Id$ */
/* one-side communication */

#include "nullmpi.h"

int MPI_Win_create(void *base, MPI_Aint size, int disp_unit, MPI_Info info, MPI_Comm comm, MPI_Win *win)
{
  NULLMPI_STATS;
  return nullmpi_unsupported();
}
