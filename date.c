#include <stdio.h>
#include <stdlib.h>

struct ArrayAsStruct{
int length;
int *array;
};
typedef struct ArrayAsStruct *array:

array createArray(int length){
  array  new = malloc(sizeof(*array));
  new->length = length;
  return new;
}

int main(void){
  int feld[] = {1, 2, 3, 4, 5, 6, 7, 8}

  return 0;

}

array sum(int ar[]){
int counter = 0;
array sum = createArray(2);
int result = 0;
int length = sizeof(ar)/4;
  for(i=0; i<length; i++;){
    if(ar[i]%2 == 0){
      result = result + ar[i];
      counter ++;
    }
  }
 sum->array[0] = counter;
 sum->array[1] = result;
 return array;
}
