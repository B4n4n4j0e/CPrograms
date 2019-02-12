#include <stdio.h>
#include <stdlib.h>

int sumofnumbers(int low, int high);

struct StructAsArray{
  int *array;
  int length;
}; typedef struct StructAsArray *array;

array createArray(int length){
  array new = malloc(sizeof(*arrary));
  new->length = length;
  new->array = malloc(sizeof(int)*length);
  return new;
}

int main(void){
printf("%d",sumofnumbers(5,8));

int scal = 4;
int max = 5;
array peter = createArray(max);
array peter = {1,2,3,4,5};

return 0;
}

int sumofnumbers(int low, int high){
  int result = 0;
  if (low > high){
    return  0;
  }
  for(int i=low; i<=high; i++){
    result = result + i;
  }
  return result;
}

array multarraycopy(array ar, int scal,int max){
  array ar2 = createArray(max);
  for(int i = 0; i<max; i++){
    ar2[i] = ar[i];
    ar2[i] = ar2[i]*scal;
  }
  return ar2;
}
