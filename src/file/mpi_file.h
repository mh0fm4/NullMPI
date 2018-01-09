
#ifndef __MPI_FILE_H__
#define __MPI_FILE_H__


#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


struct _MPI_File {
  int fd;
};


#endif /* __MPI_FILE_H__ */
