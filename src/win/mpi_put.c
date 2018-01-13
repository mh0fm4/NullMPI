/* $Id$ */
/* one-side communication */

#include "nullmpi.h"

int MPI_Put(void *origin_addr, int origin_count, MPI_Datatype origin_datatype, int target_rank, MPI_Aint target_disp, int target_count, MPI_Datatype target_datatype, MPI_Win win)
{
  NULLMPI_STATS;
  return nullmpi_unsupported();
}
