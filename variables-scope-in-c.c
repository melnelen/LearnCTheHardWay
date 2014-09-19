#include <stdio.h>
 
int THEGLOBALINT = 50;
 
int theFunction();
 
int main(int argc, const char * argv[])
{
    THEGLOBALINT++;
    int someInt = 2;
    for (int i = 0; i < someInt; i++)
    {
        someInt = 3;
        printf("i in the for loop = %d\n", i);
    }
    printf("someInt in main() = %d\n", someInt);
    printf("THEGLOBALINT in main() = %d\n", THEGLOBALINT);
    theFunction(someInt);
    printf("someInt in main() after theFunction() = %d\n", someInt);
    printf("THEGLOBALINT in main() after theFunction() = %d\n", THEGLOBALINT);
 
    return 0;
}
 
int THENOTSOGLOBALINT = 60;
 
int theFunction(int someInt)
{
    someInt++;
    THEGLOBALINT++;
    THENOTSOGLOBALINT++;
    printf("someInt in theFunction() = %d\n", someInt);
    printf("THEGLOBALINT in theFunction() = %d\n", THEGLOBALINT);
    printf("THENOTSOGLOBALINT in theFunction() = %d\n", THENOTSOGLOBALINT);
 
    return 0;
}
