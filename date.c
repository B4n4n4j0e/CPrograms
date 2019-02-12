#include <stdio.h>
#include <stdlib.h>


static char *monatsnamen[13] = {"GIBTSNICHT", "JANUAR", "FEBRUAR", "MAERZ", "APRIL", "MAI",
  "JUNI", "JULI", "AUGUST", "SEPTEMBER", "OKTOBER", "NOVEMBER", "DEZEMBER"};

typedef enum { JANUAR=1, FEBRUAR, MAERZ, APRIL,MAI,JUNI,JULI,AUGUST,SEPTEMBER, OKTOBER,
  NOVEMBER,DEZEMBER } month;

struct datumAsStruct{
  unsigned int d;
  char *m;
  unsigned int y;
  int x;

};
typedef struct datumAsStruct date;
void printAppointments(date calender[],int length);
void checkDate(date calender[],int length, int d, char *m, int y);

int main(void){
  int length = 0;
  x = "JANUAR" + "FEBRUAR";
  printf("%d", x);
  date calender[4];
  calender[0].m = "FEBRUAR";
  calender[0].d = 4;
  calender[0].y =2019;
  calender[1].m = "FEBRUAR";
  calender[1].d = 3;
  calender[1].y =2019;
  calender[2].m = "FEBRUAR";
  calender[2].d = 2;
  calender[2].y =2019;
  calender[3].m = "FEBRUAR";
  calender[3].d = 1;
  calender[3].y =2019;

  length = sizeof(calender)/sizeof(date);

  //printAppointments(calender, length);
  checkDate(calender,length,2,"FEBRUAR",2019);
  void checkDate(date calender[],int length, int d, char *m, int y);

 int k = 100;
 switch (k){
   case 1:
    printf("A");
    break;
   case 2:
    printf("B");
    break;
   case 4:
    printf("D");
    break;
   default:
    printf("WRONG INPUT");
 }

  return 0;
}

void checkDate(date calender[],int length, int d, char *m, int y){
  for (int i =0; i< length; i++){
    if (calender[i].d == d && calender[i].m == m && calender[i].y == y){
      printf(" %d %2s %d",calender[i].d,calender[i].m,calender[i].y);
    }
  }
  return;
}

void printAppointments(date calender[],int length){
  for (int i=0; i<length; i++){
    // printf("%d.",calender[i].d);
    // printf("%s.", calender[i].m);
    // printf("%d ", calender[i].y);
    printf(" %d %2s %d",calender[i].d,calender[i].m,calender[i].y);
  }
  return;
}
