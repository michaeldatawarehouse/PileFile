#include <stdio.h>
#include <stdlib.h>
#include "filestatique.h"
typedef struct file file;
struct file
{
    int tab[4];
    int debut;
    int fin;
};
void init(file *f)
{
 f->debut=0;
 f->fin=-1;
}
int  file_vide(file*f)
{
    int v;
    if((f->debut) > (f->fin))
    {
        v=1;
    }
    else
        {
            v=0;
        }
    return v;
}
int file_pleine(file*f)
{
    int p;
    if(((f->fin - f->debut) ==3))
    {

        p=1;
    }
    else
    {
        p=0;
    }
    return p;
}
void enfiler(file*f,int a)
{
    if(file_pleine(f)==1)
    {
        printf("votre file est deja pleine");
    }
    else
    {
      f->fin ++;
    f->tab[f->fin]=a;
    }
}
void defiler(file *f)
{
    if(file_vide(f)==1)
    {
        printf("votre file est vide");
    }
    else
    {
          f->debut=f->debut+1;

    }
}
void afficher(file *f)
{
    int i;
    for(i=f->debut;i<=f->fin;i++)
    {
        printf(" %d ",f->tab[i]);
    }
}

