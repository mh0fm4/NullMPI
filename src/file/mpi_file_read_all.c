/* $Id$ */
/* I/O */

#include "nullmpi.h"
#include "mpi_file.h"

int MPI_File_read_all(MPI_File fh, void *buf, int count, MPI_Datatype datatype, MPI_Status *status)
{
  NULLMPI_STATS;

  if (fh == MPI_FILE_NULL) return MPI_SUCCESS;

  ssize_t s = read(fh->fd, buf, nullmpi_sizeof_datatype(datatype) * count);

  if (s == -1) return MPI_ERR_IO;

  if (status != MPI_STATUS_IGNORE) status->size = s;

  return MPI_SUCCESS;
}
