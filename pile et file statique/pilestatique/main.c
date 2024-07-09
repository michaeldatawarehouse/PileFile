#include <stdio.h>
#include <stdlib.h>
#include "pilestatique.h"

int main()
{
    PILE *p;
    init(&p);
empiler(&p,4);
afficher(&p);

    return 0;
}
