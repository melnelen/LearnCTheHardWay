#include <stdio.h>
 
int main(int argc, const char * argv[])
{
    int myArray[] = {4, 8, 15, 16, 23, 42};
    char myName[] = "Axel";
    char myFullName[] = { 'A', 'x', 'e', 'l', ' ',
        'I', 'v', 'a', 'n', 'o', 'v', 'a', '\0'};
     
    printf("The size of an int variable is: %lu bytes\n", sizeof(int));
    printf("The value of myArray is: %d, %d, %d, %d, %d, %d\n",
           myArray[0], myArray[1], myArray[2], myArray[3], myArray[4], myArray[5]);
    printf("The size of myArray is: %lu bytes\n", sizeof(myArray));
    printf("The number of elements in myArray is: %lu\n",
           (sizeof(myArray) / sizeof(int)));
    printf("The first element of myArray is: %d\n", myArray[0]);
            //In C all arrays are zero indexed
    printf("The seventh element of myArray is: %d\n", myArray[6]);
            //This element is past the end of the array
     
    printf("The size of a char variable is: %lu\n", sizeof(char));
     
    printf("The value of myName is: %s\n", myName);
    printf("The size of myName is: %lu bytes\n", sizeof(myName));
    printf("The number of characters in myName is: %lu\n",
           (sizeof(myName) / sizeof(char)));
    printf("The fifth character in myName is: %c\n", myName[4]);
            //This character is the null character of the array
     
    printf("The value of myFullName is: %s\n", myFullName);
    printf("The size of myFullName is: %lu bytes\n", sizeof(myFullName));
    printf("The number of characters in myFullName is: %lu\n",
           (sizeof(myFullName) / sizeof(char)));
    printf("The thirteenth character in myFullName is: %c\n", myFullName[12]);
            //This character is the null character of the array
     
    printf("The fourteenth character in myFullName is: %c\n", myFullName[13]);
            //This character is past the end of the array
     
    return 0;
}
