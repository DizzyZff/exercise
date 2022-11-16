#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{   
    char *firstArg;
    char *secondArg;
    if (argc !=3){
        printf("Usage: first3 <string1> <string2>\n", argv[0]);
        return 0;
    }
    firstArg = argv[1];
    secondArg = argv[2];
    if (strlen(firstArg) < 3 || strlen(secondArg) < 3){
        printf("Error: both strings must be at least 3 characters long.\n");
    }
    else{
        printf("%c%c%c", firstArg[0], firstArg[1], firstArg[2]);
        printf("%c%c%c\n", secondArg[0], secondArg[1], secondArg[2]);
    }
    return 0;
}
