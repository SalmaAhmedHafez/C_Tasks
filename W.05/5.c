#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, *px, *py, *pz;
    x = 10, y = 20, z = 30, px = &x, py = &y, pz = &z;

    printf(" x = %d\n y = %d\n z = %d\n", x, y, z);
    printf(" px = %d\n py = %d\n pz = %d\n", px, py, pz);
    printf(" *px = %d\n *py = %d\n *pz = %d\n", *px, *py, *pz);

    printf("Swapping Pointers\n");
    pz = px;
    px = py;
    py = pz;

    printf(" x = %d\n y = %d\n z = %d\n", x, y, z);
    printf(" px = %d\n py = %d\n pz = %d\n", px, py, pz);
    printf(" *px = %d\n *py = %d\n *pz = %d\n", *px, *py, *pz);

    return 0;
}



