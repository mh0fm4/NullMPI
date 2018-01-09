/* $Id$ */
/* I/O */

#include "nullmpi.h"
#include "mpi_file.h"

int MPI_File_close(MPI_File *fh)
{
  NULLMPI_STATS;

  if (*fh == MPI_FILE_NULL) return MPI_SUCCESS;

  close((*fh)->fd);

  free(*fh);

  return MPI_SUCCESS;
}
