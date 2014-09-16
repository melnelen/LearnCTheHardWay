#include <stdio.h>
 
int SomeFunction();
 
int main(int argc, const char * argv[])
{
    int someInt = 5;
    int anotherInt = 6;
    SomeFunction(someInt,anotherInt);
     
}
 
int SomeFunction(int x, char c)
{
    printf("x = %d\n", x);
    printf("c = %s\n", &c);
    return 0;
}
