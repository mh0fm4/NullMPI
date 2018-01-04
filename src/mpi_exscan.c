/* $Id$ */
/* Collective communication */

#include "nullmpi.h"

int MPI_Exscan(void *sendbuf, void *recvbuf, int count,
              MPI_Datatype type, MPI_Op op, MPI_Comm comm)
{
  NULLMPI_STATS;
  return MPI_SUCCESS;
}
