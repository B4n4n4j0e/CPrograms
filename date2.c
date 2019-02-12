#include <stdio.h>
#include <stdlib.h>

struct datumAsStruct{
  int d;
  int m;
  int y;
};typedef struct datumAsStruct *datum;

datum createDate(int d,int m,int y){
  datum new = malloc(sizeof(*datum));
  new->d = d;
  new->m = m;
  new->y = y;
  return new;
}

struct terminAsstruct{
  char *desc;
  datum date;
}; typedef struct terminAsstruct *termin;

termin createTermin(datum date, char *desc) {
  termin new = malloc(sizeof(*termin));
  new->date = date;
  new->desc = desc;
  return termin;
}
void FuegeTerminEin(int d, int m, int y, char* desc, termin cal[],int pos);
void PrintTermin(termin calender[],int length);
void HabeIchTermin(int d, int m, int y, termin calender[]);



int main(void){
  termin MeineTermine[3];
  FuegeTerminEin(19,2,2018,"DSG-EiAPS-B", MeineTermine,0);
  FuegeTerminEin(1,3,2018,"DSG-JAP-B", MeineTermine,1);
  int length = sizeof(MeineTermine/sizeof(termin));
  PrintTermin(MeineTermine,length);


}

void FuegeTerminEin(int d, int m, int y, char* desc, termin cal[],int pos){
  datum newD = createDate(d,m,y);
  termin newT = createTermin(newd, desc);
  cal[pos] = newT;
  }
  return;
}

void PrintTermin(termin calender[],int length){
  for (int i=0; i< length;i++){
    printf("%s am %d.%d.%d ",(calender->desc,(calender->date)->d,(calender->date)->m,(calender->date)->y);
  }
  return;
}
void HabeIchTermin(int d, int m, int y, termin calender[]){
  if ((calender->date)->d == d && (calender->date)->m == m &&(calender->date)->y == y){
    printf("%s",calender->desc);
  }else{
    printf("Kein Termin");
  }
  return;
}
