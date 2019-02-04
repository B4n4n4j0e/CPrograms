#include <stdio.h>
#include <stdlib.h>

struct structAsQelem{
  int content;
  struct structAsQelem *previous;
  struct structAsQelem *next;
};
typedef struct structAsQelem *qelem;

qelem createQelem(int content){
  qelem new = malloc(sizeof(*qelem));
  new->content = content;
  return new;
}

struct structAsQlist{
  qelem bot;
  qelem top;
  int counter;
};
typedef struct structAsQlist *qlist;

void printArray(qlist ql);
qlist dequeue(qlist ql);
qlist enqueue(qlist ql,int content);
int front(qlist ql);
void empty(qlist ql);
qlist createQ()

int main(void){
  void empty(qlist ql);
  qlist queue = createQ();
  enqueue(queue, 1);
  enqueue(queue, 2);
  printf("%d"front(queue));
  enqueue(queue, 3);
  enqueue(queue, 4);
  enqueue(queue, 5);
  enqueue(queue, 6);
  printArray(queue);
  dequeue(queue);
  dequeue(queue);
  dequeue(queue);
  dequeue(queue);
  dequeue(queue);
  printArray(queue);
  dequeue(queue);
  dequeue(queue);

  return 0;

}



qlist createQ(){
  qlist new = malloc(sizeof(*qlist));
  new->counter = 0;
  return new;
}

void empty(qlist ql){
  if (ql->counter == 0){
    printf("Queue is empty!");
    return;
  }else{
    printf("Queue isn'emtpy");
    return;
  }
}

int front(qlist ql){
  if (ql->counter == 0){
    printf("Queueueueue is empty");
    return;
  }else{
    return ((ql->top)->content);
  }

qlist enqueue(qlist ql,int content){
  qelem new = createQelem(content);
  if (ql->counter == 0){
    ql->bot = new;
    ql->top = new;
    ql->counter = 1;
  }else{
    (ql->bot)->previous=new;
    new->next = ql->bot
    ql->bot = new;
    counter++;
    return ql;
  }
}

qlist dequeue(qlist ql){
  if (ql->counter == 0){
    printf("QUEUE IS EMPTY CAN'T DEQUEUE!!!")
    return ql;
  }else{
    qelem tmp;
    ql->top = tmp;
    ql->top = (ql->top)->previous;
    free(tmp);
    return ql;
    ql->counter--;
  }

}

void printArray(qlist ql){
  printf("[ ");
  qelem tmp = ql->topelem;
  for(int i = 0; i<ql->counter;i++){
    printf("%d ",tmp->content);
    tmp = tmp->previous;
  }
  printf(" ]")
}
