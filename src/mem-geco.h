#ifndef MEMGECO_H_INCLUDED
#define MEMGECO_H_INCLUDED

#include <stdio.h>
#include <stdint.h>

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

void     *Malloc      (size_t);
void     *Calloc      (size_t, size_t);
void     *Realloc     (void *, size_t, size_t);
void     Free         (void *);
uint64_t TotalMemory  ();
uint64_t MaxMemory    ();
void     PrintHRBytes (int64_t);

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

#endif

