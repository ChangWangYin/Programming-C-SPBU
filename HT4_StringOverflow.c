#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[40] = "Hello, ";
    char name[20];
    puts("What is your name?");

    // scanf %s -- string, %[^\n]s -- string with spaces (multiple words)
    // Fix format string to also avoid overflow.
    // See man 3 scanf or https://www.man7.org/linux/man-pages/man3/scanf.3.html#EXAMPLES

    //scanf("%[^\n]s", name); If we input more than 20 bytes, it will not operate the codes below and end up without anything.

    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0'; // Replace '\n' with '\0'
    
    strcat(s, name);
    strcat(s, "!");
    puts(s);
    return 0;
}