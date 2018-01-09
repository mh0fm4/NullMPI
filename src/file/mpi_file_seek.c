/* $Id$ */
/* I/O */

#include "nullmpi.h"
#include "mpi_file.h"

int MPI_File_seek(MPI_File fh, MPI_Offset offset, int whence)
{
  NULLMPI_STATS;

  if (fh == MPI_FILE_NULL) return MPI_SUCCESS;

  int w;
  
  if (whence == MPI_SEEK_SET) w = SEEK_SET;
  else if (whence == MPI_SEEK_CUR) w = SEEK_CUR;
  else if (whence == MPI_SEEK_END) w = SEEK_END;
  else return MPI_ERR_IO;

  off_t o = lseek(fh->fd, offset, w);

  if (o == -1) return MPI_ERR_IO;

  return MPI_SUCCESS;
}
