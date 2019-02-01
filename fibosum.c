#include <stdio.h>
#include <stdlib.h>

//Fibo zahl start1, start2, anzahl -wie groß soll das Array sein

struct ArrayAsStruct{
int *array;
int length;
};
typedef struct ArrayAsStruct *array;

array createArray(length){
  array new = malloc(sizeof(*array));
  new->length = length;
  new->array = malloc(length*(sizeof(int));
  return array;
}

array fibarray(int start1,int start2,array ar,int length);
 nextFib(int start1, int start2);

int main (void){

  length = 10;
  array feld;
  feld = createArray(length);
  fibarray(1,2,length,feld);

  for(int i = 0; i<length;i++){
    printf("%d", feld[i]);
  }




}
 array fibarray(int start1,int start2,array ar,int length){
   ar->array[0] = start1;
   ar->array[1] = start2;

   for(int i = 2; i<length; i++){
     ar[i] = nextFib(start1,start2);
   }
 }

 nextFib(int start1, int start2){
 int result;
 result = start1;
 result = result + start2;
 return result;
}
