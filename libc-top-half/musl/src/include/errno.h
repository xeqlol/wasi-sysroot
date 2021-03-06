#ifndef ERRNO_H
#define ERRNO_H

#include "../../include/errno.h"

#ifdef __wasilibc_unmodified_upstream // Use alternate WASI libc headers
hidden int *___errno_location(void);

#undef errno
#define errno (*___errno_location())
#else
// Use the WASI libc errno.
#endif

#endif
