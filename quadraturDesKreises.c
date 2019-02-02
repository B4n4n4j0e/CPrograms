#include <stdio.h>
#include <stdlib.h>

int quadriereZahlenVonBis(int start,int ende);

int main(void){

int result;
result = quadriereZahlenVonBis(5,3);

  return 0;

}

int quadriereZahlenVonBis(int start,int ende){
  int result =0;
  if (ende < start){
    printf("Falsche Eingabe start-Wert kann nicht größer als Endwert sein!");
    return -1;
  }
  for (int i =0; i<=(ende-start);start++){
      result = start*start;
      printf("%d ", result);
  }
  return result;
}
