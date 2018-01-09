/* $Id$ */
/* I/O */

#include "nullmpi.h"
#include "mpi_file.h"

int MPI_File_delete(char *filename, MPI_Info info)
{
  NULLMPI_STATS;

  int e = unlink(filename);

  if (e == -1) return MPI_ERR_IO;

  return MPI_SUCCESS;
}
