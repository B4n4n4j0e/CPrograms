#include <stdio.h>
#include <stdlib.h>

void verschiebe(char feld[], int length);
void drehum(char feld[], int length);
void bildeBetrag(int feld[],int length);

int main(void){
int length;
char feld[] = {'a','b','c','d','e','f'};
length = sizeof(feld);
int feld2[] = {1,-1,-1,-2,-4,-5,2};
int length2 =sizeof(feld2)/sizeof(int);

drehum(feld, length);
bildeBetrag(feld2,length2);

for (int i=0;i<length2;i++){
  printf("%d ", feld2[i]);
  }
return 0;
}

void verschiebe(char feld[], int length){
  char tmp0;
  char tmp1;
  char tmp2 = feld[0];
  tmp0 = feld[length-1];
  for(int i=1;i<length;i++){
    tmp1 = feld[i];
    feld[i]=tmp2;
    tmp2 = tmp1;

  }
  feld[0] = tmp0;

}

void drehum(char feld[], int length){
  char tmp0;
  for(int i = 0; i<(length/2);i++){
    tmp0 = feld[i];
    feld[i] = feld[length-(1+i)];
    feld[length-(1+i)] = tmp0;
  }
  return;
}
void bildeBetrag(int feld[],int length){
  for(int i=0; i<length;i++){
    if(feld[i] < 0){
      feld[i] = feld[i] *-1;
    }
  }
  return;
}

//   a
// 1 2 3 4 5
// a b c d e
//
// //tmp1 = b tmp2=
