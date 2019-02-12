#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

//DatumStruct bauen

struct DatumAsStruct {
  int d;
  int m;
  int y;
}; typedef struct DatumAsStruct date;

date createDate(int d, int m, int y,){
  date new = malloc(sizeof(*date));
  new->d = d;
  new->m = m;
  new->y = y;
  return new;
}

struct TerminAsStruct{
  date *pdate;
  char *desc;
  int counter;
};typedef struct TerminAsStruct *ptermin;

ptermin meineTermine;

int main(void){





 }

ptermin fuegeTerminEin(meineTermine, int d, int m, int y,char* desc){
  ptermin new = malloc(sizeof(*ptermin));
  date dnew = createDate(d,m,y);


}


//fuege Termin ein -> in meineTermine Termin einfügen (4 Infos

//PrintTermin alle Termine aus MeineTermine drucken

//Hab Ich Termin "KEIN TERMIN" oder Terminbeschreibung wiedergeben
