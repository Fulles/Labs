
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    float floatVar;
    FILE *file;

    file = (FILE *)fopen ("222333", "r");
    fscanf(file, "%f", &floatVar);
    fclose(file);

    printf("%f\n", floatVar);


    return 0;
}

