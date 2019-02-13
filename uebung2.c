#include <stdlib.h>
#include <stdio.h>

//
// ANWEISUNGEN
// - Klasse Einkaufswagen
// -Verweis auf next
// - Einkauf
//
// -> Methode Ermittlung der Gesamtsumme der zu kaufenden Ware
// -> Referenz zum nächsten Einkaufswagen
// Getter + Setter Einstellen für Attribut next
//
// - Klasse Kassenschlange
// Inhalt:
// gesamtUmsatz
// first
// last
//
// -> first = Erster Einkaufswagen null, wenn kein Einkaufswagen in Kassenschlange
// -> gesamtUmsatz Warenwert aller verkauften Waren speichern

struct einkaufswagenAsStruct{
  struct einkaufswagenAsStruct *next;
  int einkauf;
};typedef struct einkaufswagenAsStruct *wagen;

wagen create wagen(int einkauf){
  wagen new = malloc(sizeof(*wagen));
  new->einkauf = einkauf;
  new->next = NULL;
  return new;
}

struct schlangeAsStruct{
  int umsatz;
  wagen first;
  wagen last;
};typedef struct schlangeAsStruct *queue;

queue create schlange(){
  schlange new = malloc(sizeof(*queue));
  new->umsatz = 0;
  return new;
}

queue anstellen(wagen einkauf, queue que);
queue kassiereErstenWagen(wagen einkauf queue que);
queue kassiereAlleWagen(wagen queue que);


int main(void){


return 0;
}

queue anstellen(wagen einkauf, queue que){
  if (que->first == NULL){
    einkauf = que->last;
    einkauf = que->first;
  }else{
    einkauf->next = que->last;
    einkauf = que->last;
  }
  return que;
}

queue kassiereErstenWagen(wagen einkauf,queue que){
  if (que->first == NULL){
    printf("Warteschlange ist leer!");
  }else if(que->first == 1){
    wagen tmp = que->first;
    que->umsatz = que->umsatz + tmp->einkauf;
    que->first = NULL;
    que->last = NULL;
    free(tmp);
  }else{
    wagen tmp = que->first;
    que->umsatz = que->umsatz + tmp->einkauf;
    que->first = tmp->next;
    free(tmp);
  }
  return que;
}

queue kassiereAlleWagen(queue que){
  if (que->first !=NULL){
    kassiereAlleWagen(kassiereErstenWagen(que->first));
  }
  return que;
}
//
// ZUSATZMETHODEN!!!
// anstellen() Neuer Einkaufswagen wird hinzugefügt
// kassiereErstenWagen() Kassiert ersten Wagen
// kassiereAlleWagen() bassierend auf kassiereErstenWagen()
