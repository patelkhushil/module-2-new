/*Write a C program to create a file, write a string into it, close the file, then 
open the file again to read and display its contents.*/

#include<stdio.h> 
#include<stdlib.h> 
int main() 
{ 
    FILE *fp; 
    char str[] = "Hello, this is a file handling test!"; 
    char ch; 
  
    fp = fopen("example.txt", "w"); 
    if (fp == NULL) 
	{ 
        printf("File could not be created.\n"); 
        return 1; 
    } 
 
    fputs(str, fp);   
    fclose(fp);      
 
    fp = fopen("second.txt","r");   
    
	if(fp==NULL) 
    { 
        printf("\nFile doesn't exist"); 
    } 
    else 
    { 
        while(fgets(str,sizeof(str),fp))   
        { 
            printf("%s",str); 
        }        
    } 
    return 0; 
} 
