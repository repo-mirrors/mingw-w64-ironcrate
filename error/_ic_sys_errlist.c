#include <ic_stdc.h>

#undef _ic_sys_errlist

char *_ic_sys_errlist[] =
{
  /* 0 */  "No error",
  /* 1 IC_EPERM */  "Operation not permitted",
  /* 2 IC_ENOENT */  "No such file or directory",
  /* 3 IC_ESRCH */  "No such process",
  /* 4 IC_EINTR */  "Interrupted function call",
  /* 5 IC_EIO */  "Input/output error",
  /* 6 IC_ENXIO */  "No such device or address",
  /* 7 IC_E2BIG */  "Arg list too long",
  /* 8 IC_ENOEXEC */  "Exec format error",
  /* 9 IC_EBADF */  "Bad file descriptor",
  /* 10 IC_ECHILD */  "No child processes",
  /* 11 IC_EAGAIN */  "Resource temporarily unavailable",
  /* 12 IC_ENOMEM */  "Not enough space",
  /* 13 IC_EACCES */  "Permission denied",
  /* 14 IC_EFAULT */  "Bad address",
  /* 15 IC_ENOTBLK */  "Unknown error",
  /* 16 IC_EBUSY */  "Resource device",
  /* 17 IC_EEXIST */  "File exists",
  /* 18 IC_EXDEV */  "Improper link",
  /* 19 IC_ENODEV */  "No such device",
  /* 20 IC_ENOTDIR */  "Not a directory",
  /* 21 IC_EISDIR */  "Is a directory",
  /* 22 IC_EINVAL */  "Invalid argument",
  /* 23 IC_ENFILE */  "Too many open files in system",
  /* 24 IC_EMFILE */  "Too many open files",
  /* 25 IC_ENOTTY */  "Inappropriate I/O control operation",
  /* 26 IC_ETXTBSY */  "Unknown error",
  /* 27 IC_EFBIG */  "File too large",
  /* 28 IC_ENOSPC */  "No space left on device",
  /* 29 IC_ESPIPE */  "Invalid seek",
  /* 30 IC_EROFS */  "Read-only file system",
  /* 31 IC_EMLINK */  "Too many links",
  /* 32 IC_EPIPE */  "Broken pipe",
  /* 33 IC_EDOM */  "Domain error",
  /* 34 IC_ERANGE */  "Result too large",
  /* 35 IC_EUCLEAN */  "Unknown error",
  /* 36 IC_EDEADLK */  "Resource deadlock avoided",
  /* 37 IC_UNKNOWN */  "Unknown error",
  /* 38 IC_ENAMETOOLONG */  "Filename too long",
  /* 39 IC_ENOLCK */  "No locks available",
  /* 40 IC_ENOSYS */  "Function not implemented",
  /* 41 IC_ENOTEMPTY */  "Directory not empty",
  /* 42 IC_EILSEQ */  "Illegal byte sequence",
  /* 43 */  "Unknown error"
};

