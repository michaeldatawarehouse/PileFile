
#include <stdio.h>
#include <stdlib.h>
#include "filedynamique.h"
typedef struct ELEMENT ELEMENT;
struct ELEMENT
{
    int data;
    ELEMENT *suivant;
};

typedef struct FILES FILES;
struct FILES
{
    ELEMENT *premier;
    ELEMENT *dernier;
};

FILES *init()
{
   FILES *file=malloc(sizeof(file));
    file->premier=NULL;
    file->dernier=NULL;
    return file;
}
 int filevide(FILES *file)
 {
     int vide;
     if(file->premier==NULL)
     {
         vide=1;
     }
     else
        {
            vide=0;
        }
     return vide;
 }
 FILES *enfiler(FILES*file,int data)
 {
     ELEMENT *nouveau=malloc(sizeof(nouveau));
      ELEMENT *nouvea=malloc(sizeof(nouvea));
     nouveau->data=data;
     if(filevide(file)==1)
     {
         nouveau->suivant= NULL;
         file->premier=nouveau;
     }
     else
     {

            file->dernier->suivant=nouveau;
            nouveau->suivant=NULL;
     }
     file->dernier=nouveau;
     return file;
 }
 void afficher(FILES *fil)
 {
     if(filevide(fil)==0)
     {
          ELEMENT *actuel=malloc(sizeof(*actuel));
          actuel=fil->premier;
         while(actuel!=NULL)
         {
          printf("(%d)->",actuel->data);

             actuel=actuel->suivant;
         }
         printf("NULL");

     }


 }
 FILES *defiler(FILES *file)
 {
     if(filevide(file)==0)
     {
         ELEMENT *actuel=malloc(sizeof(*actuel));
     actuel=file->premier;
     file->premier=file->premier->suivant;
     free(actuel);
     }

 }

