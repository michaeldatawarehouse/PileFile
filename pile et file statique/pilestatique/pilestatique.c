#include <stdio.h>
#include <stdlib.h>
/*declaration de la structure piles statique*/
typedef  struct PILE PILE;
struct PILE
{
     int TAB[10];
    int sommets;
};
/*definition de la fonction  d'initialisation de la pile*/
 void init(PILE *p)
 {
     p->sommets=-1;
 }
 /*definition de la fonction  pile vide qui test si une une pile est vide et retourne 1 si oui et 0 sinon*/
int pile_vide(PILE *p)
 {
     int v;
      if( p->sommets== -1 )
     {
         v=1;
     }
     else{
        v=0;
     }
     return v;
 }
 /*definition de la fonction  pile pleine qui test si une une pile est pleine et retourne 1 si oui et 0 sinon*/
 int pile_pleine(PILE *p)
 {
    int pe;
     if((p->sommets)==9)
     {
         pe=1;
     }
     else{
        pe=0;
     }
     return pe;

 }
 /* definition de la fonction empiler qui prend en parametre la pile dans la quelle empiler et l'element a empiler */
PILE *empiler(PILE *p,int d)
 {
     if(pile_pleine(p)==1)
     {
      printf("votre pile est pleine vous ne pouvez pas ajoutez d'elements");
     }
     else
        {
            p->sommets++;

           p->TAB[p->sommets]=d;
     }
     return p;
 }
/*definition de la fonction d'affichage de la pile qui prend en parametres une pile*/
 void afficher(PILE *p)
 {
     int i;
     for(i=(p->sommets);i>=0;i--)
     {
         printf("%d->",p->TAB[i]);
     }
     printf("NULL");
 }
/*definition de la fonction depiler*/
void depiler (PILE *p)
{
    int x;
    if(pile_vide(p)==1)
    {
        printf("votre pile est vide vous ne pouvez pas depiler ");
    }
    else
    {
        x=p->TAB[p->sommets];
        p->sommets--;
    }
    return x;
}
