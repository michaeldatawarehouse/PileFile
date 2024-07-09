#ifndef FILESTATIQUE
#define FILESTATIQUE
typedef struct file file;
void init(file*f);
int  file_vide(file*f);
int file_pleine(file*f);
void enfiler(file*f,int a);
void defiler(file *f);
void afficher(file *f);
#endif // FILESTATIQUE
