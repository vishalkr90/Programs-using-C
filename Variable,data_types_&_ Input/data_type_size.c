#include<stdio.h>
int main(){
  int integer;
  float decimal;
  double doub;
  char character;

  printf("\n The size of integer: %lu",sizeof(integer));
  printf("\n The size of float: %lu",sizeof(decimal));
  printf("\n The size of double: %lu",sizeof(doub));
  printf("\n The size of character: %lu",sizeof(character));

    return 0;
}