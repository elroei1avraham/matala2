#include <stdio.h>
#include "my_mat.h"

int main(){
    char x = 'x';
    int Mat[10][10];
    int tmpMat[10][10];
    int i, j;

    while(x != 'D'){
        scanf(" %c", &x);
        if(x == 'A'){
            inputValue(Mat);
            for(int i = 0; i <10; i++){
                for(int j = 0; j <10; j++){
                    tmpMat[i][j] = Mat[i][j];
                }
            }
            FW_algorithm(tmpMat);
        }
        if(x == 'B'){
            scanf("%d" ,&i);
            scanf("%d", &j);
            isRoute(i, j,tmpMat);
        }
        if(x == 'C'){
            scanf("%d" ,&i);
            scanf("%d", &j);
            shortestRoute(i, j, tmpMat);
        }
    }
    return 0;
}