#include <stdio.h>
int main(void) {
  char numeros[100000];
  scanf("%s", numeros);
  for (int i = 0; i < strlen(numeros); i++){
     printf("%c\n", numeros[i]);
  }  
  return 0;
}