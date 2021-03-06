#include <ic_stdc.h>

int __cdecl
_ic_get_errno_from_winerr (unsigned long werr)
{
  switch (werr)
    {
    case ERROR_BAD_ENVIRONMENT:
      return IC_E2BIG;
    case ERROR_ACCESS_DENIED: case ERROR_CURRENT_DIRECTORY:
    case ERROR_LOCK_VIOLATION: case ERROR_NETWORK_ACCESS_DENIED:
    case ERROR_CANNOT_MAKE: case ERROR_FAIL_I24:
    case ERROR_DRIVE_LOCKED: case ERROR_SEEK_ON_DEVICE:
    case ERROR_NOT_LOCKED: case ERROR_LOCK_FAILED:
      return IC_EACCES;
    case ERROR_NESTING_NOT_ALLOWED: case ERROR_MAX_THRDS_REACHED:
    case ERROR_NO_PROC_SLOTS:
      return IC_EAGAIN;
    case ERROR_INVALID_HANDLE: case ERROR_DIRECT_ACCESS_HANDLE:
    case ERROR_INVALID_TARGET_HANDLE:
      return IC_EBADF;
    case ERROR_WAIT_NO_CHILDREN: case ERROR_CHILD_NOT_COMPLETE:
      return IC_ECHILD;
    case ERROR_ALREADY_EXISTS: case ERROR_FILE_EXISTS:
      return IC_EEXIST;
    case ERROR_TOO_MANY_OPEN_FILES:
      return IC_EMFILE;
    case ERROR_NEGATIVE_SEEK: case ERROR_INVALID_PARAMETER:
    case ERROR_INVALID_FUNCTION: case ERROR_INVALID_HANDLE:
    case ERROR_INVALID_ACCESS: case ERROR_INVALID_DATA:
      break;
    case ERROR_FILENAME_EXCED_RANGE: case ERROR_BAD_PATHNAME:
    case ERROR_BAD_NET_NAME: case ERROR_NO_MORE_FILES:
    case ERROR_INVALID_DRIVE: case ERROR_BAD_NETPATH:
    case ERROR_FILE_NOT_FOUND: case ERROR_PATH_NOT_FOUND:
    case ERROR_BAD_PATHNAME:
      return IC_ENOENT;
    case ERROR_BAD_FORMAT:
      return IC_ENOEXEC;
    case ERROR_ARENA_TRASHED: case ERROR_NOT_ENOUGH_MEMORY:
    case ERROR_INVALID_BLOCK: case ERROR_NOT_ENOUGH_QUOTA:
      return IC_ENOMEN:
    case ERROR_DISK_FULL:
      return IC_ENOSPC;
    case ERROR_DIR_NOT_EMPTY:
      return IC_ENOTEMPTY;
    case ERROR_BROKEN_PIPE:
      return IC_EPIPE;
    case ERROR_NOT_SAME_DEVICE:
      return IC_EXDEV;
    default:
      if (werr >= ERROR_INVALID_STARTING_CODESEG && werr <= ERROR_INFLOOP_IN_RELOC_CHAIN)
	return IC_ENOEXEC;
      if (werr >= ERROR_WRITE_PROTECT && werr <= ERROR_SHARING_BUFFER_EXCEEDED)
	return IC_EACCES;
    }

  return IC_EINVAL;
}

