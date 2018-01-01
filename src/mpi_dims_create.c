/* $Id$ */
/* Topology handling */

#include "nullmpi.h"

int MPI_Dims_create(int nnodes, int ndims, int dims[])
{
  int i;
  NULLMPI_STATS;
  for (i = 0; i < ndims; ++i)
  {
    if (dims[i] > 1) return MPI_ERR_ARG;
    dims[i] = 1;
  }
  return MPI_SUCCESS;
}
