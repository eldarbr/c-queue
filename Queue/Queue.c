#include "Queue.h"


void QueuePush(QueueElement **head, int value) {

    // allocate and save new value
    QueueElement *newElement = (QueueElement*)malloc(sizeof(QueueElement));
    newElement->value = value;

    // if the head is empty, set it to the new element
    if ((*head) == NULL) {
        (*head) = newElement;
    } else { // otherwise connect the list
        QueueElement *tail = *head;
        while (tail->nextElement != NULL) {
            tail = tail->nextElement;
        }
        tail->nextElement = newElement;
    }
}


int QueuePop(QueueElement **head) {
    if ((*head) == NULL) {
        return 0;
    }
    int value = (*head)->value;

    QueueElement *toFree = *head;

    (*head) = (*head)->nextElement;

    if (toFree != NULL) {
        free(toFree);
    }

    return value;
}


bool QueueGetIsLast(QueueElement **head) {
    if ((*head) == NULL) {
        return false;
    }
    if ((*head)->nextElement == NULL) {
        return true;
    } else {
        return false;
    }
}
