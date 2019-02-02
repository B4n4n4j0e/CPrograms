#include <stdio>
#include <stdlib>

struct StackElemStruct{
  int content;
  struct StackElem *previous;
};
typedef struct StackElemStruct *elem

elem NewStackElem(int content){
  elem new = malloc(sizeof(*elem));
  elem new->content = content;
  return new;
}

struct StackAsList{
  elem topelem;
  int counter;
};
typedef struct StackAsList *stackL;



int main(void){


}

StackAsList createStack(void){
  stackL new = malloc(sizeof(stackL));
  new->counter = 0;
  return new;
}

int empty(stackL stack){
  if (stack->elemcount==0){
    printf("\n Stack is empty");
    return 1;
  }else{
    printf("\n net gschimpft is globt genug");
    return 0;
  }
}

int top(stackL stack){
  if (stack->elemcount==0){
    printf("\n Stack is empty");
  }else{
    return ((stack->topelem)->content);
  }
}

stackL push(stackL stack, int content){
  elem new = NewStackElem(content);
  if (stack->elemcount==0){
      stack->topelem = new;
    }else{
      new->previous = topelem;
      stack->topelem = new;
    }
    stack->elemcount++;
    return new;
}

stackL pop(stackL stack){
  if (stack->elemcount==0){
    printf("Can't pop stack is empty");
  }else{
    elem tmp = stack->topelem;
    stack->topelem = tmp->previous;
    free (tmp);
    stack->counter--;
    return stack;
  }

void printStack(stackL stack){
  elem tmp = stack->topelem;
  for (int i=0; i<stack->elemcount;i++){
    printf("%d ", tmp->content);
    tmp = tmp->previous;
  }
}
