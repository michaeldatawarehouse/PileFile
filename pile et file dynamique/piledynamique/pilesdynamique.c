#include<stdio.h>
#include<stdlib.h>
typedef struct ELEMENT ELEMENT;
struct ELEMENT
{
    int data;
    ELEMENT *suivant;
};
typedef struct PILE PILE;
struct PILE
{
    ELEMENT* premier;
};
PILE *init()
{
    PILE *pile=malloc(sizeof(*pile));
    pile->premier=NULL;

    return pile;
}
void pilevide(PILE *pi)
{
    if(pi->premier==NULL)
    {
        printf("la pile est vide");

    }
    else
    {
        printf("pile non vide");
    }
}
PILE *empiler(PILE *pi,int a)
{
    ELEMENT* nouveau=malloc(sizeof(*nouveau));
    if (nouveau == NULL)
	   {
	   exit(EXIT_FAILURE);
	   }
    nouveau->data=a;
    nouveau->suivant=pi->premier;
    pi->premier=nouveau;
    return pi;
}
void affichepile(PILE *pi)
{
    ELEMENT* act=malloc(sizeof(*act));
    if (act == NULL)
	   {
	   exit(EXIT_FAILURE);
	   }
	   act=pi->premier;
    while(act!=NULL)
    {
        printf("(%d)",act->data);
        act=act->suivant;
    }

}
PILE *depiler(PILE *pi)
{

    ELEMENT *act=malloc(sizeof(*act));
    act->data=pi->premier->data;
    pi->premier=pi->premier->suivant;
    free(act);
    return pi;
}
int *nombredelement(PILE*pi)
{
    ELEMENT* act=malloc(sizeof(*act));
    if (act == NULL)
	   {
	   exit(EXIT_FAILURE);
	   }
	   act=pi->premier;
	   int n=0;
    while(act!=NULL)
    {
      n=n+1;
        act=act->suivant;
    }
    return n;
}
