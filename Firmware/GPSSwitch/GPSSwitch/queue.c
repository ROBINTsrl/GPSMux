#include "queue.h"

void initQueue(Queue* q)
{
	q->count = 0;
	q->read_idx = 0;
	q->write_idx = 0;
}

BOOL dequeue(Queue* q, BYTE* data) {
	if (q->count<=0)
		return FALSE;

	*data = q->queue[q->read_idx];
	
	q->read_idx++;
	
	q->count--;
	
	if (q->read_idx >= QUEUE_DEPTH)
		q->read_idx = 0;
	
	return TRUE;
}

void enqueue(Queue* q, BYTE bData) {
	if (q->count>QUEUE_DEPTH)
		return;	// TODO: manage overrun ?
	
	q->queue[q->write_idx] = bData;
	
	q->write_idx++;
	
	q->count++;
	
	if (q->write_idx >= QUEUE_DEPTH)
		q->write_idx = 0;
}
