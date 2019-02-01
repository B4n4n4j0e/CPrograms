#include <stdlib.h>
#include <stdio.h>


int zaehleVokale(char ar[], int length);
int main(void) {

  char peter[] = {'A','B','C','D','E','I','O','U','a'};
  int length = sizeof(peter);
  int result =  zaehleVokale(peter,length);
  printf("%d", result);


  return 0;

}

int zaehleVokale(char ar[],int length){
  int counter =0;
  char vokal[] = {'a','e','i','o','u','A','E','I','O','U'};
  for(int i = 0; i < length;i++){
    for (int j =0; j< 10; j++){
      if (ar[i] == vokal[j]){
        counter ++;
      }
    }
  }
  return counter;
}
