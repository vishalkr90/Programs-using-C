#include<stdio.h>

int main(){
int marks[3][3][3];
for(int row = 0; row < 3; row ++){
    for(int col = 0; col < 3; col++){
        for(int st = 0; st < 3; st++){
            printf("\nStudent : %d, Marks : %d, College : %d", row+1,col + 1, st +1 );
            scanf(" %d", &marks[row][col][st]);
        }
    }
}


    return 0;
}