#include <stdio.h>
#include <stdlib.h>
#include "filestatique.h"

int main()
{
    file* f;
        init(&f);
    enfiler(&f,4);
    enfiler(&f,8);
        enfiler(&f,8);





                     printf("%d",file_pleine(&f));




    return 0;
}
