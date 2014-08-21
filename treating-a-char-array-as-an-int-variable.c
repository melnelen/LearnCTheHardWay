#include <stdio.h>
 
int main(int argc, const char * argv[])
{
    char myName[4];
    myName[0] = 'A';
    myName[1] = 'x';
    myName[2] = 'l';
    myName[3] = '\0';
    int myNameAsAnInt;
 
    printf("The size of an int variable is: %lu bytes\n", sizeof(int));
    printf("The size of a char variable is: %lu byte\n", sizeof(char));
    printf("The size of myName is: %lu bytes\n", sizeof(myName));
    printf("Here is the value of myName: %s\n", myName);
    printf("Here is myName as an ASCII code: %d %d %d %d\n",
           myName[0], myName[1], myName[2], myName[3]);
 
    myNameAsAnInt = ((myName[0]<<24) + (myName[1]<<16) + (myName[2]<<8) + myName[3]);
 
    printf("This is the first character in myName shifted by 24 (8*3) bits: %d\n",
           (myName[0]<<24));
    printf("This is the second character in myName shifted by 16 (8*2) bits: %d\n",
           (myName[1]<<16));
    printf("This is the third character in myName shifted by 8 bits: %d\n",
           (myName[2]<<8));
    printf("This is the fourth character in myName not shifted a bit: %d\n",
           myName[3]);
    printf("Here is myNme as an int: %d\n", myNameAsAnInt);
 
    return 0;
}
