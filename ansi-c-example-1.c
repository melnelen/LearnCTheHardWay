#include <stdio.h>
 
int main(int argc, const char * argv[])
{
    int x, y;
    x = 2;
    y = 3;
    while (x < y)
    {
        printf("x < y\n");
         
        if (x == y)
        {
            printf("x = y\n");
        }
        else
        {
            x++;
        }
    }
    printf("x = %d\n",x);
    return 0;
}
