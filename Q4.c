#include<stdio.h>
void array(int n,int arr[n][n]);
void ismagic(int n,int arr[n][n]);
int main(){
    int n;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int arr[n][n];
    array(n,arr);
    ismagic(n,arr);
    return 0;
}
void array(int n,int arr[n][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("enter the element at position (%d,%d): ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
}
void ismagic(int n,int arr[n][n]){
    int needed_sum=0;
    int c=0,ps=0,aps=0,w=0;
    for(int i=0;i<n;i++){
        needed_sum+=arr[0][i];
    }
    for(int i=0;i<n;i++){
        int rs=0;
        int cs=0;
        for(int j=0;j<n;j++){
            rs+=arr[i][j];
            cs+=arr[j][i];
        }
        if(rs==cs){
            c++;
            w=rs;
        }  
    }
    for(int i=0;i<n;i++){
        ps+=arr[i][i];
        aps+=arr[i][n-1-i];

    }
    printf("%d %d %d %d %d",ps,aps,w,c,needed_sum);
    if(ps==aps && c==n && ps==w){
        printf("the given array is a magic square");
    }
    else{
        printf("the given array is not a magic square");
    }
}


