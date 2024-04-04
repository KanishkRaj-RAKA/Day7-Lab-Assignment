#include <stdio.h>
void concatenate(char *str1,char *str2);
int main() {
    char str1[100];
    char str2[100];
    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    str1[strlen(str1) - 1] = ' ';
    concatenate(str1,str2);
    printf("String : %s ", str1);
    return 0;
}
void concatenate(char *str1, char *str2)
{
  while (*str1 != '\0' )
  {
      str1++;
  }
  while (*str2 != '\0') 
  {
    *str1 = *str2;
    str1++;
    str2++;
  }
  *str1 = '\0';
}