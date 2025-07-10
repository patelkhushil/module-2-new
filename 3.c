/*Write a C program that includes variables, constants, and comments. 
Declare and use different data types (int, char, float) and display their 
values*/

#include<stdio.h> 
int main() 
{ 
	const float PI = 3.14159; 
	int age = 15;            
	char grade = 'B';        
	float height = 6.9;      
	printf("Age: %d\n", age);            
	printf("Grade: %c\n", grade);        
	printf("Height: %.2f meters\n", height);  
	printf("The value of PI is: %.5f\n", PI);
	 
	return 0;  
} 


