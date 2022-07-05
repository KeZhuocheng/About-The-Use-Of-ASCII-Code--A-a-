#include <stdio.h>
#include <stdlib.h>

int main()
{

    char letter;
    printf("type the A/a:");
    scanf("%c",&letter);
    if (letter<97)
        letter = 'a';
     else
        letter ='A';
         printf("%c",letter);
    return 0;
}
