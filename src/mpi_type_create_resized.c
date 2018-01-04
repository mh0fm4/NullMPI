/* $Id$ */
/* User-defined datatypes */

#include "nullmpi.h"

int MPI_Type_create_resized(MPI_Datatype oldtype, MPI_Aint lb, MPI_Aint extent, MPI_Datatype *newtype)
{
  NULLMPI_STATS;
  return nullmpi_unsupported();
}
