/* 
 * I literally cannot see the comment because the syntax
 * color is dark as my soul blue against a black background.
 *
 * Actually, if I squint hard enough, I can sort of see it. Nevermind.
 *
 * This is test #69420
 * (Fizzbuzz in C)
 */

#include <stdio.h>
int main(void)
{
    for (i = 1; i < 100; i++)
        if (!(i % 15)){
            printf("fizzbuzz\n");
        }
        else if (!(i % 5)){
            printf("buzz\n");
        }
        else if (!(i % 3)){
            printf("fizz\n");
        }
        else {
            printf("%d\n", i);
        }
    return 0;
}
