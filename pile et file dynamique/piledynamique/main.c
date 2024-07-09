#include<stdio.h>
#include<stdlib.h>
#include"pilesdynamique.h"
int main()
{
PILE *pile=init();
int b=3;
pilevide(pile);
pile=empiler(pile,3);
pile=empiler(pile,8);
depiler(pile);
pile=empiler(pile,9);
affichepile(pile);
int n;
n=nombredelement(pile);
printf("%d",n);
    return 0;
}
