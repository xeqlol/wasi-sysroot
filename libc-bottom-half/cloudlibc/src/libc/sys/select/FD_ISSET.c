// Copyright (c) 2015 Nuxi, https://nuxi.nl/
//
// SPDX-License-Identifier: BSD-2-Clause

#include <sys/select.h>
#ifdef __wasilibc_unmodified_upstream
#else
#include <stdbool.h>
#endif

#ifndef FD_ISSET
#error "FD_ISSET is supposed to be a macro as well"
#endif

// clang-format off
#ifdef __wasilibc_unmodified_upstream
int (FD_ISSET)(int fd, const fd_set *fd_set) {
#else
bool (FD_ISSET)(int fd, const fd_set *fd_set) {
#endif
  return FD_ISSET(fd, fd_set);
}
