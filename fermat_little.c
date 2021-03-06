// Finds the least residue using Fermat's Little Theorem.

#include <stdio.h>
#include <math.h>

int main() {

    int base = 4, power = 532, modulo = 11;
    int rem = (int) pow(base, power % (modulo - 1)) % modulo;

    if(base % modulo != 0)
        printf("Least residue is %d in (mod %d).\n", rem, modulo);
    else
        printf("Modulo divides base.\n");

    return 0;
}
