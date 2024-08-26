#include <stdio.h>
#include <stdlib.h>

void flippedStairCase(int n);

void staircase(int n);

void printDiamond(int n);

 
void Xpattern(int n);
//*       *
//  *   *
//    *
//  *   *
//*		  *


// same sa staircase but diff solution
void staircase1(int n);
//*
//**
//***
//****


// this one is reversed to 1
void staircase2(int n);
//Output:
		//****
		// ***
		//  **
		//   *
		//

void TwoStairs(int n);
//*		*
//**   **
//*** ***
//*******



void hourGlass(int n);

								
int pyramidNums(int n);
//     1
//    121
//   12321
//

int FloydTriangle(int n);
int mirroredFloyd(int n);
void printXPattern(int n);


int main(){
	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	flippedStairCase(n);
    int s;
    scanf("%d", &s);
return 0;
}







void flippedStairCase(int n){
		int i,j,k;
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i; j++){
			printf(" ");
			
		}
		for(k = j; k<=n;k++){
			printf("%d", i);
		}
		printf("\n");
		
	}
}
void staircase(int n){
	int i,j,k;
	
	for(i=1; i<=n; i++){
		for(j=n;j>=n-i+1;j--){
			printf("%d", j);
		}
		printf("\n");
	}
}
void printDiamond(int n) {
    int i, j;

    // Upper half of the diamond
    for (i = 1; i <= n; i++) {
        // Print spaces before the asterisks
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print asterisks
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for(i = n-1; i >= 1; i-- ){
    	for(j=1; j<= n-i; j++){
    		printf(" ");
    		
		}
		for(j = 1; j<=2*i - 1; j++){
			printf("*");
		}
		printf("\n");
	}
}
 
void printXPattern(int n) {
    // Iterate through each row
    for (int i = 0; i < n; i++) {
        // Iterate through each column
        for (int j = 0; j < n; j++) {
            // Print '*' if conditions for X pattern are met
            if (i == j || j == (n - i - 1))
                printf("*");
            else
                printf(" ");
        }
        // Move to the next line after each row is printed
        printf("\n");
    }
}


// same sa staircase but diff solution
void staircase1(int n){
	int i,j;
	for(i=1; i<=n;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
// this one is reversed to 1
void staircase2(int n){
	int i,j,k; 
	
	for(i=1;i<=n;i++){
		for(j=n;j>n-i; j--){
			printf(" ");
		}
		for(j=1;j<=n-i+1;j++){
			printf("*");
		}
		printf("\n");
	}
	
}

void TwoStairs(int n){
//*		*
//**   **
//*** ***
//*******
	
	int i,j,k;
	
	for(i=1; i<=n;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		for(j=1;j<=n-i; j++){
			printf(" ");
			
		}
		for(j=1;j<=n-i; j++){
			printf(" ");
			
		}
		for(k = j; k<=n;k++){
			printf("*");
		}
		
		printf("\n");
	}
	
	

}

void hourGlass(int n){
	
	int i, j;
	for(i = n; i >= 1; i-- ){
    	for(j=1; j<= n-i; j++){
    		printf(" ");
    		
		}
		for(j = 1; j<=2*i - 1; j++){
			printf("*");
		}
		printf("\n");
	}
	
    for (i = 2; i <= n; i++) {
        // Print spaces before the asterisks
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print asterisks
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
	
}

int pyramidNums(int n){
//     1
//    121
//   12321
//
	int i, j ,k;

	for(i=1; i<=n; i++){
		for(j=1; j<=n-i;j++){
			printf(" ");
		}
		for(j=1; j<=i; j++){
			printf("%d",j);
		}
		for(k=i-1; k>=1;k--){
			printf("%d", k);
		}
		printf("\n");
	}

}
int mirroredFloyd(int n)
{
	int num =1;
	int i,j;
	   for (i = 1; i <= n ; i++) {
        // Print spaces
        for (j = i; j < i; j++) {
            printf(" ");
        }
        
        // Print numbers in decreasing order
        for (int j = 1; j <= i; j++) {
            printf("%d", num++);
        }
        
        printf("\n");
    }
}

void staircaseVertical(int n ){
	int i,j,k;
    
    for (int i = n; i >= 1; i--) {
        // Print spaces
        for (j = 1; j <= n-i; j++) {
            printf(" ");
        }
        
     
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        
        printf("\n");
    }
}



