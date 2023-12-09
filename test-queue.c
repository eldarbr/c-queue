#include "Queue/Queue.h"
#include <stdio.h>


int main() {


    QueueElement *queue = 0;

    printf("%d %d\n", QueueGetIsLast(&queue), QueuePop(&queue));

    QueuePush(&queue, 10);

    printf("%d %d\n", QueueGetIsLast(&queue), QueuePop(&queue));


    QueuePush(&queue, 10);
    QueuePush(&queue, 11);
    QueuePush(&queue, 12);
    QueuePush(&queue, 13);

    printf("%d %d\n", QueueGetIsLast(&queue), QueuePop(&queue));
    printf("%d %d\n", QueueGetIsLast(&queue), QueuePop(&queue));
    printf("%d %d\n", QueueGetIsLast(&queue), QueuePop(&queue));
    printf("%d %d\n", QueueGetIsLast(&queue), QueuePop(&queue));
    printf("%d %d\n", QueueGetIsLast(&queue), QueuePop(&queue));



    return 0;
}
