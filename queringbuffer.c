#include <stdio.h>
#include <stdlib.h>

struct QueueAsRingbufferStruct{
  int size;
  int counter;
  int out;
  int in;
  int *array;
};typedef struct QueueAsRingbufferStruct *QueueAsRingbuffer;

QueueAsRingbuffer NewQueueAsRingbuffer(int size){
  if (size<0){
    exit(-1);
  }else{
    QueueAsRingbuffer new = malloc(sizeof(QueueAsRingbuffer));
    new->size = size;
    new->counter = 0;
    new->in = 0
    new->out =0;
    new->array = malloc(sizeof(*array)*size);
    return new;
  }
}

QueueAsRingbuffer enqueue(int content, QueueAsRingbuffer que){
  if (que->counter >0 && que->in ==que->out){
    printf("Queue is full");
    exit(-1);
  }else{
    que->array[que->in] = content;
    que->in++;
    que->counter++;
  }
}
