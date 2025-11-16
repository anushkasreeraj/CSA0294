//length of the given string
#include <stdio.h>

int main() {
    char str[100];
    char *p;
    int length = 0;

    printf("Input a string : ");
    scanf("%s", str);

    p = str;   // pointer points to first character

    while (*p != '\0') {   // loop until null terminator
        length++;
        p++;               // move pointer to next character
    }

    printf("The length of the given string %s is : %d\n", str, length);

    return 0;
}
