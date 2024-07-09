#ifndef filedynamique
typedef struct ELEMENT ELEMENT;
typedef struct FILES FILES;
FILES *init();
 int filevide(FILES *file);
  FILES *enfiler(FILES *file,int data);
   int filevide(FILES *file);
   void afficher(FILES *file);
    FILES *defiler(FILES *file);
#endif // filedynamique
