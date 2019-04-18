#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) { 

    char word[1000]; 
    int i,len; 
    
    printf("請輸入一個字串:\n"); 
    scanf("%s",word); 
    len = strlen(word); 
    printf("反向字串為 :");
    
    for(i=len-1;i>=0;i--){ 
    printf("%c",word[i]); 
    } 
    
    printf("\n"); 
    system("pause"); 
	return 0;
}
