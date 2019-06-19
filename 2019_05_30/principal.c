#include <stdio.h>
#include "entero.h"

int main(int argc, char** argv) {

   enetro a,b;

   a = 5;

   b = 6;

  printf("la suma de %d + %d es %d\n",a,b,suma(a,b));

  printf("la resta de %d - %d es %d\n",a,b,resta(a,b));

  printf("la multiplicación de %d * %d es %d\n",a,b,multiplicación(a,b));

  printf("la división de %d / %d es %d\n",a,b,división(a,b));

    }
