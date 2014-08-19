#include <stdio.h>
 
int main(int argc, const char * argv[])
{
    int howICare = 100;
    char null = '\0';
    int dontCare = howICare * null;
    printf("You should care %d%%! \n",dontCare);
 
    return 0;
}
