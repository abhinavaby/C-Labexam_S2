#include<stdio.h>
#include<string.h>
int main(){
    printf("----------------Anagram Checker----------------\n");
    char str1[100],str2[100];
    printf("Enter the first string: ");
    scanf("%s",str1);
    printf("Enter the second string: ");
    scanf("%s",str2);
    int c1=0,c2=0;
    for(int i=0;str1[i]!='\0';i++){
        c1++;
    }
    for(int i=0;str2[i]!='\0';i++){
        c2++;
    }
    if(c1==c2){
        int c3=0;
       
        for(int i=0;str1[i]!='\0';i++){
            
            for(int j=0;str2[j]!='\0';j++){
                if(str1[i]==str2[j]){
                    c3++;
                    str2[j]='0';
                    
                    
                   
                }
            }}
        if(c3==c1){
            printf("The strings are anagrams.\n");
            
        }
        else{
            printf("The strings are not anagrams.\n");
           
        }
              
        
    }
    return 0;
}
       
    