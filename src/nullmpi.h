/* $Id$ */
/* private data and portability header */

#include "config.h"

#if STDC_HEADERS
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
#else
# if !HAVE_MEMCPY
#  define memcpy(d, s, n) bcopy ((s), (d), (n))
# endif
#endif

#if HAVE_ASSERT_H
# include <assert.h> /* for __ASSERT_FUNCTION */
#endif

#include "mpi.h"

#ifndef FALSE
# define FALSE 0
# define TRUE !FALSE
#endif

#if defined __ASSERT_FUNCTION
# define NULLMPI_STATS nullmpi_stats(__ASSERT_FUNCTION)
#else
# if HAVE_FUNC
#  define NULLMPI_STATS nullmpi_stats(__func__)
# else
#  define NULLMPI_STATS
# endif
#endif

#define NULLMPI_PROCESSOR_NAME "supercomputer"

extern int nullmpi_print(const char *string);
#define nullmpi_stats(func) nullmpi_print(func)
#define nullmpi_assert(EXPR) assert(EXPR)

extern void nullmpi_initialize(void);
extern int nullmpi_initialized(void);
extern void nullmpi_finalize(void);
extern void nullmpi_abort(int);
extern int nullmpi_unsupported(void);