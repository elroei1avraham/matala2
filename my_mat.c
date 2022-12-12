#include "my_mat.h"
#include <stdio.h>

void inputValue(int arr[10][10]){
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            scanf(" %d", &arr[i][j]);
        }
    }
}
int getMin(int a , int b){
    if(a<b){
        return a;
    }
    return b;
}

void FW_algorithm(int arr[10][10]){
    for (int k = 0; k < 10; k++) {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if(i!=j && arr[i][k]!=0 && arr[k][j]!=0){
                    if(arr[i][j] == 0){
                    arr[i][j] = arr[i][k] + arr[k][j];
                    }
                    else{
                    arr[i][j] = getMin(arr[i][j], arr[i][k] + arr[k][j]);
                    }
                }
            }
        }
    }
}

void isRoute(int i, int j, int arr[10][10]){
    FW_algorithm(arr);
    if(arr[i][j] == 0){
        printf("false\n");
    }
    else{
        printf("true\n");
    }
}

void shortestRoute(int i, int j, int arr[10][10]){
    FW_algorithm(arr);
    if(arr[i][j] == 0){
        printf("-1\n");
    }
    else{
        printf("%d\n",arr[i][j]);
    }
}
