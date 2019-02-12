#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


struct QueueAsElement{
  int content;
  struct QueueAsElement *pnext;
};typedef struct QueueAsElement *pelem;

pelem create(int content){
  pelem new = malloc(sizeof(*pelem));
  new->content = content;
  return pelem;
}

struct QueueListAsStruct{
  pelem deq; //firstelem
  pelem enq; //lastelem
  int counter;
}; typedef struct QueueAsListStruct *plist;

int main(void){

}

plist createList(void){
  plist new  = malloc(sizeof(*plist));
  new->counter = 0;
  new->deq = NULL;
  new->enq = NULL;
  return new;
}

plist enqueue(plist list, int content){
  pelem newE = create(content);
  if (list->counter == 0){
    list->enq = newE;
    list->deq = newE;
  }
  else{
    newE->pnext = list->enq;
    list->enq = newE;
  }
  list->counter++;
  return list;
}

plist dequeue(plist list){
  if (list->counter == 0){
    printf("DEQUEUE ISN'T POSSIBLE QUEUE IS EMPTY");
  }else if (list->counter == 1){
    list->deq = NULL;
    list->enq = NULL;
    list->counter--;
  }
  else{
    list->deq = (list->deq)->next;
    list->counter--;

  }

  }
}
