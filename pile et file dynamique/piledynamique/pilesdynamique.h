#ifndef PILESDYNAMIQUE
typedef struct ELEMENT ELEMENT;
typedef struct PILE PILE;
PILE *init();
void pilevide(PILE *pi);
PILE *empiler(PILE *pi,int a);
void affichepile(PILE *pi);
PILE *depiler(PILE *pi);
int nombredelement(PILE*pi);
#endif // PILEDYNAMIQUE
