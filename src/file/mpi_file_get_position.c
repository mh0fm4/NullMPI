/* $Id$ */
/* I/O */

#include "nullmpi.h"
#include "mpi_file.h"

int MPI_File_get_position(MPI_File fh, MPI_Offset *offset)
{
  NULLMPI_STATS;

  if (fh == MPI_FILE_NULL) return MPI_SUCCESS;

  off_t o = lseek(fh->fd, 0, SEEK_CUR);

  if (o == -1) return MPI_ERR_IO;

  *offset = o;

  return MPI_SUCCESS;
}
