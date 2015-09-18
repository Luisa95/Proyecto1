/*#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
void funcion(uint32_t *vector, uint32_t *vector2);

int main()
{
    int i;
    uint32_t v[5], v2[5];
    for(i=0;i<5;i++)
{
    v[i]=v2[i]=i;
    printf("inicial %d %d\n \n", *(v+i),*(v2+i));
}

    funcion(&v[4],&v2[1]);
    for(i=0;i<5;i++)
    {
     printf("\n\n Nuevo %d %d", *(v+i), *(v2+i));
    }
    return 0;
}

void funcion(uint32_t *vector,uint32_t *vector2)
{
    *vector=723;
    *vector2=666;
}
*/
