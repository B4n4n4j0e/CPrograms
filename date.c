#include <stdio.h>
#include <stdlib.h>

struct ArrayAsStruct{
int length;
int *array;
};
typedef struct ArrayAsStruct *array;



array createArray(int length){
  array  new = malloc(sizeof(*array));
  new->length = length;
  new->array = malloc(length*(sizeof(int)));
  return new;
}

array sum(int ar[],int length_);

int main(void){

  array feld[] = {1, 2, 3, 4, 5, 6, 7, 8,9,19};
  array result = sum(feld,10);
  printf("\n%d", result->array[1]);

  return 0;

}

array sum(int ar[],int length_){
int counter = 0;
array sum = createArray(2);
int result = 0;
  for(int i=0; i<length_; i++){
    if(ar[i]%2 == 0){
      result = result + ar[i];
      counter ++;
    }
  }
  sum->array[0] = counter;
  sum->array[1] = result;
 return sum;
}
