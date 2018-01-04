/* $Id$ */
/* Communicator handling */

#include "nullmpi.h"

MPI_Comm MPI_Comm_f2c(MPI_Fint comm)
{
  NULLMPI_STATS;
  return comm;
}
