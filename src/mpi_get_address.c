/* $Id$ */
/* User-defined datatypes */

#include "nullmpi.h"

int MPI_Get_address(const void *location, MPI_Aint *address)
{
  NULLMPI_STATS;
  /*@i@*/ *address = (MPI_Aint) location;
  return MPI_SUCCESS;
}
