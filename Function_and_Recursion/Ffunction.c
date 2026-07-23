#include<stdio.h>
void england(){
    printf("England\n");
    return;
}
void australia(){
    printf("australia\n");
    england();
    return;
}
void India(){
    printf("India\n");
    australia();
    return;
}

int main(){
    India();
    return 0;
}