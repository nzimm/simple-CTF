/*
 * gcc -m32 -mpreferred-stack-boundary=2 -fno-stack-protector -z execstack
 */
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main()
{
    char buffer[256];
    puts("Enter something...");
    gets(buffer);
    printf("You typed: %s\n", buffer);
    return 0;
}
