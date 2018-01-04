/* $Id$ */
/* User-defined datatypes */

#include "nullmpi.h"

int MPI_Type_get_true_extent(MPI_Datatype datatype, MPI_Aint *true_lb, MPI_Aint *true_extent)
{
  NULLMPI_STATS;
  return nullmpi_unsupported();
}
