#include <stdio.h>
#include <stdlib.h>

int main()
{

    char owen;
    printf("type the A/a:");
    scanf("%c",&owen);
    if (owen<97)
        owen = 'a';
     else
        owen ='A';
         printf("%c",owen);
    return 0;
}
