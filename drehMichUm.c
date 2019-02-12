#include <stdlib.h>
#include <stdio.h>

void drehMichUm(char *pwort,int length);

int main(void){
  char wort[8] = "FUCK OFF"
  int length;
  length = sizeof(wort);
  drehMichUm(wort,length);
  return 0;
}

void drehMichUm(char *pwort, int length){
  char tmp;
  for(int i = 0; i<=(length/2);i++){
    char tmp = pwort[i];
    pwort[i] = pwort[length-i];
    pwort[length-i] = tmp;
  }
  printf("%s",pwort);


  return;
}
