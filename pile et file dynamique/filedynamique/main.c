#include <stdio.h>
#include <stdlib.h>
#include "filedynamique.h"

int main()
{
FILES *file=init();
enfiler(file,3);
enfiler(file,5);
afficher(file);
defiler(file);

defiler(file);
defiler(file);
enfiler(file,1);
enfiler(file,2);
enfiler(file,3);
afficher(file);
}
