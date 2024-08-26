#include <stdio.h>
#include <math.h>
// geometric progression with a given r and num

void Geo(int n, int r, int start){
	
	if(n == 0){
		return;
	}
	
	printf("%d ", start);
	Geo(n-1,r,start*r);

}
int D2B(int n, int base, int bin){
	if(n == 0){
		return bin;
	}
	return D2B(n/2, base * 10, bin + (n%2)* base);
}
int D2H (int n, int base, int hex){
	if(n == 0){
		return hex;
	}
	return D2H(n/16, base * 10, hex + (n%16)* base);
}

	


int sumDigits(int number, int sum);

void printNthNaturals(int n);

int sumofN2M(int n,int m){
	if(n==m){
		return n;
	}else{
	return  n + sumofN2M(n+1,m);
	}
}
int Fibo(int n){
	if(n == 0){
		return 0;
	}
	else if(n == 1){
		return 1;
	}
	else
	return Fibo(n-1) + Fibo(n-2);
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
//*       *
//  *   *
//    *
//  *   *
//*		  *

int main(){
	
	int n,m;
	//printf("Enter n: ");
	//scanf("%d", &n);
	printf("%d",D2H(10, 1, 0));
	//printXPattern(n);

	
//	printf("%d", sumDigits(n, 0));
		return 0;
}
