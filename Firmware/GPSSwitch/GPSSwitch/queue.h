#ifndef QUEUE_H
#define QUEUE_H

#include <m8c.h>        // part specific constants and macros

#define QUEUE_DEPTH	64

typedef struct {
	BYTE count;
	BYTE write_idx;
	BYTE read_idx;
	BYTE queue[QUEUE_DEPTH];
} Queue;

extern void initQueue(Queue*);
extern BOOL dequeue(Queue*, BYTE*);
extern void enqueue(Queue*, BYTE);

#endif 