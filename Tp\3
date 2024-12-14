#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//Définition d'une structure représentant un élément d'une liste chaînée
typedef struct element {
int val;
struct element *suivant;
}element;
//************ Un Fonction : Cree liste Vide ************ 
element *creerListe()
{
  element *liste = NULL;
  return liste;
}
//************ Un Fonction : Charger Liste  ************ 
element *chargerListe(int Tab[],int N,element *liste)
{
  int i = 0;
  element *tete = liste; 
  while( N > i)
  {
    element *P = malloc(sizeof(element));
    if(P == NULL)
    {
      printf("echec d'allocation !!");
      exit(1);
    } 
   P -> val = Tab[i];
   P -> suivant = liste ;
   liste = P;
   i++;
  }
  return liste;
}
//************ Un Fonction : Afcher Liste  ************ 
void afcherListe(element *liste)
{
  if(liste == NULL)
  {
    printf("La Liste est Vide !\n");
  }else{
    while(liste != NULL)
      {
        printf("%d -> ",liste -> val);
        liste = liste -> suivant;
      }
    printf("NULL");
  }
}
//************ Un Fonction : Supprimer EnFin  ************ 
element *supprimerEnFin(element *liste)
{ 
  element *p = liste;
  if(liste == NULL)
  {
    printf("La Liste est Vide !\n");
  }
  if(liste -> suivant == NULL)
  {  
    free(liste);
    return NULL;  
  }
    while(p -> suivant -> suivant != NULL)
       p = p -> suivant;
  free(p -> suivant);
  p -> suivant = NULL;
  element *liste_1 = liste;
  return liste_1;
}
//************ Un Fonction : Ajouter EnDebut  ************ 
element *ajouterEnDebut(element *liste,int Val)
{
  element *nouv = malloc(sizeof(element));
  nouv -> val = Val;
  nouv -> suivant = NULL;
  if(liste != NULL)
  {  
    nouv -> suivant = liste;
    liste  = nouv;
  }
  element *liste_1 = liste;
  return liste_1;
}
//************ Un Fonction : Vider Liste  ************
void *viderListe(element *liste)
{
  element *p ;
  while(liste != NULL)
    {
      p = liste;
      liste = liste -> suivant ;
      free(p);
    }
  printf("La liste est vide \n");
}
int main()
{
  int Tab[10]={1,3,5,7,8,10,9,11,13,20};
  element*liste=creerListe();
  //***********************************
  printf("******* CHARGER LISTE *******\n\n");
  element*L=chargerListe(Tab,10,liste);
  afcherListe(L);
  //***********************************
  printf("\n\n******* SUPPRIMER UN ELEMENT ENFIN D'UN LISTE *******\n\n");
  element* L1=supprimerEnFin(L);
  afcherListe(L1);
  //***********************************
  printf("\n\n******* AJOUTER '40' EN DEBUT DE LA LISTE *******\n\n");
  element* L2=ajouterEnDebut(L1,40);
  afcherListe(L2);
  //***********************************
  printf("\n\n******* VIDER LISTE *******\n\n");
  viderListe(L2);
  return 0;
}
