#ifndef PILESTATIQUE
#define PILESTATIQUE
/*declaration de la structure pile*/
typedef  struct PILE PILE;
/*declaration  de la fonction d'initialisation de la pile*/
  void init(PILE *p);
 int pile_vide(PILE *P);
   void empiler(PILE *p,int d);
    int pile_pleine(PILE *p);
     void afficher(PILE *p);
#endif // PILESTATIQUE

