#include<stdio.h>
#include<string.h>
void namee(char* n,int len);
void palindrome(char* n,int len);
void ocurrence(char* n,int len);
int main(){
    char name[100];
    printf("enter the name: ");
    scanf("%s",name);
    int n=strlen(name);
    namee(name,n);
    palindrome(name,n);
    ocurrence(name,n);
    return 0;
    
}

void namee(char* n,int len){
   for(int i=0;i<len;i++){
       printf("%c",*(n+i));
   }
   printf("\n");
}

void palindrome(char* n,int len){
    char new[100];
    for(int i=len-1;i>=0;i--){
       new[len-1-i]=*(n+i);
   }

    if(strcmp(n,new)==0){
         printf("the given name is a palindrome");
    }
    else{
         printf("the given name is not a palindrome");
    }
   printf("\n");
}
void ocurrence(char* n,int len){
    char w;
    printf("enter the character to find its ocurrence: ");
    scanf(" %c",&w);
    int c=0;
    for(int i=0;i<len;i++){
        if(*(n+i)==w){
            c++;    
        }
    }
    printf("the character %c occurs %d times in the name\n",w,c);

}
