#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct dyna_internal {
    struct dyna_internal *next;
    void *buf;
    size_t bufsize;
    int val;
} iDyna;

typedef struct dyna {
    iDyna *head;
    iDyna *tail;
} Dyna;

int initDyna(Dyna* dyna);

void exitDyna(Dyna* dyna);

int appendDyna(Dyna *dyna, void *inbuf, size_t inbufsize, int val);

int readDyna(Dyna *dyna, void **inbuf, size_t *inbufsize, int *val, size_t index);

int writeDyna(Dyna *dyna, void *inbuf, size_t inbufsize, int val, size_t index);

int insertDyna(Dyna *dyna, void* inbuf, size_t inbufsize, int val, size_t index);

int removeDyna(Dyna* dyna, size_t index);

size_t getDynaLength(Dyna *dyna);