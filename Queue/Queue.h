#ifndef QUEUE_E
#define QUEUE_E


#include <stdlib.h>
#include <stdbool.h>


typedef struct QueueElement QueueElement;


struct QueueElement {
    int value;
    QueueElement *nextElement;
};


void QueuePush(QueueElement **, int);


int QueuePop(QueueElement **);


bool QueueGetIsLast(QueueElement **);


#endif
