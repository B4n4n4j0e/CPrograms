#include <stdio.h>
#include <stdlib.h>

//Fibo zahl start1, start2, anzahl -wie groß soll das Array sein

struct ArrayAsStruct{
int *array;
int length;
};
typedef struct ArrayAsStruct array;

array *createArray(int length){
  array *new = malloc(sizeof(array));
  new->length = length;
  new->array = malloc(length*(sizeof(int)));
  return new;
}

array *fibarray(int start1,int start2,array *ar,int length);
int nextFib(int start1, int start2);

int main (void){

int length = 30;
  array *feld;
  feld = createArray(length);
  fibarray(0,1,feld, length);

  for(int i = 0; i<length;i++){
    printf("%d ", feld->array[i]);
  }


}
 array *fibarray(int start1,int start2,array *ar,int length){
   int result;
   ar->array[0] = start1;
   ar->array[1] = start2;

   for(int i = 2; i<length; i++){
     ar->array[i] = start1 + start2;
     start1 = start2;
     start2 = ar->array[i];
   }
   return ar;
 }

 int nextFib(int start1, int start2){
 int result = 0;
 result = start1 + start2;
 start1 = start2;
 start2 = result;
 return result;
}
