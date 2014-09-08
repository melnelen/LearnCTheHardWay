#include <stdio.h>
 
int main(int argc, const char * argv[])
{
    int myDay = 2;
 
        switch(myDay) {
            case 1:
                printf("It is Monday\n");
                break;
            case 2:
                printf("It is Tuesday\n");
            case 3:
                printf("It is Wednesday\n");
            case 4:
                printf("It is Tuesday, Wednesday or Thursday\n");
                break;
            case 5:
                printf("It is Friday\n");
 
            default:
                printf("I don't know what day it is!\n");
        }
    return 0;
}
