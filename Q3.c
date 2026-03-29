#include<stdio.h>
int main(){
    int n;
    printf("enter the length of the matrix");
    scanf("%d",&n);
    int q[n][n];
    printf("enter the elements of the matrix");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&q[i][j]);
        }
    }
    printf("the elements above principle diagonals are:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                printf("%d \n",q[i][j]);
            }
        }
    }


    int sr=0,sc=0;
    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){
            sr+=q[i][j];
            sc+=q[j][i];
        }
    }
    printf("\nsum of row elements: %d\n", sr);
    printf("sum of column elements: %d\n", sc);

    return 0;
}