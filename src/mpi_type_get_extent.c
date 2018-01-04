/* $Id$ */
/* User-defined datatypes */

#include "nullmpi.h"

int MPI_Type_get_extent(MPI_Datatype datatype, MPI_Aint *lb, MPI_Aint *extent)
{
  NULLMPI_STATS;
  return nullmpi_unsupported();
}
