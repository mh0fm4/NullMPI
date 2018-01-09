/* $Id$ */
/* I/O */

#include "nullmpi.h"
#include "mpi_file.h"

int MPI_File_open(MPI_Comm comm, char *filename, int amode, MPI_Info info, MPI_File *fh)
{
  NULLMPI_STATS;

  *fh = MPI_FILE_NULL;
  if (comm == MPI_COMM_NULL) return MPI_SUCCESS;

  int flags = 0;

  if (amode & MPI_MODE_RDONLY) flags = O_RDONLY;
  else if (amode & MPI_MODE_WRONLY) flags = O_WRONLY;
  else if (amode & MPI_MODE_RDWR) flags = O_RDWR;

  if (amode & MPI_MODE_CREATE) flags |= O_CREAT;

  if (amode & MPI_MODE_EXCL) flags |= O_EXCL;

  if (amode & MPI_MODE_DELETE_ON_CLOSE) return nullmpi_unsupported();

  if (amode & MPI_MODE_APPEND) flags |= O_APPEND;

  int fd = open(filename, flags, S_IRUSR|S_IWUSR);

  if (fd == -1) return MPI_ERR_IO;

  *fh = malloc(sizeof(struct _MPI_File));

  (*fh)->fd = fd;

  return MPI_SUCCESS;
}
