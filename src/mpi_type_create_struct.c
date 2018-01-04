/* $Id$ */
/* User-defined datatypes */

#include "nullmpi.h"

int MPI_Type_create_struct(int count, int array_of_blocklengths[], MPI_Aint array_of_displacements[], MPI_Datatype array_of_types[], MPI_Datatype *newtype)
{
  NULLMPI_STATS;
  return nullmpi_unsupported();
}
