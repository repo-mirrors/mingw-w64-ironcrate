#include <icrt.h>
#include <windows.h>

void *
__w64crt_realloc (void *ptr, size_t sz)
{
  if (!ptr)
    return malloc (sz);
  if (sz)
    return HeapReAlloc (GetProcessHeap (), 0, ptr, sz);
  free (ptr);
  return NULL;
}
