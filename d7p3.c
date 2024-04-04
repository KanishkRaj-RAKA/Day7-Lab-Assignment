//3. Write a function, using pointers, that accepts a string as a parameter and converts all its
//characters to upper case without using any string library functions. Also write the driver
//code.
#include <stdio.h>
void convertToUpperCase(char *str);
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    convertToUpperCase(str);
    printf("String in uppercase: %s\n", str);
    return 0;
}
void convertToUpperCase(char *str) {
    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - ('a' - 'A'); 
        }
        str++; 
    }
}
