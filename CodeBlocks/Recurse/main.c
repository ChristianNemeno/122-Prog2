#include <stdio.h>
#include <string.h>
#include <math.h>


int sumDigits(int number, int sum);

//prints the nautrals numbers till nth num
void Naturals(int n);



//returns the sum of the numbers from n to m
int SumOf(int n, int m,int sum );


//returns the sum of the numbers from the first natural number till to the nth , n =50, sum of 1 to 50 , 1+2+3+4...+50
// revised
int sumofN2M(int n,int m);
int sumRange(int n, int m);
/*int SumOf(int n,int sum ){

	if(n==0)
		return sum;

	else {
		return SumOf(n-1,sum + n);
	}
}*/


// prints the nth term
int Fibo(int n);



// Prints Fibo sequence upto nth term
void printFibo(int n, int a, int b, int count);

//Prints array from index 0 to nth index
void printArrayElements(int arr[], int size, int index);

// my solution
//int countDigits(int n, int ctr);
// vs solution chat gpt
int countDigits(int n);
// print array
void printArray(int arr[], int index, int size);
// palindrome checker
void isPal(char* str, int start, int size);
// decimal to binary
int RecursiveD2B(int n, int bin,int base);
// binary to decimal
int RecursiveB2D(int n, int dec);

// geometric progression with given r and nth number and startning num
void Geo(int n, int r, int start);

void printNth(int n);

int GCD(int n1, int n2);
/*int LCM(int num1, int num2){
	int gcd = GCD(num1, num2);
	return LCM(num1 * num2)/ gcd;
}*/

// sum of array boi
int arraySum(int arr[], int size);

//power function math
double power(double base, int exponent);




int main(){

	Naturals(10);


	return 0;
}
/*
int sumDigits(int number, int sum){
	if(number==0)
		return sum;
	else
	return sumDigits(number/10, sum + number %10);

}*/
int sumDigits(int number, int sum){
	if(number==0)
		return sum;
	else
	return sumDigits(number/10, sum + number %10);

}

//prints the nautrals numbers till nth num
void Naturals(int n){
	if(n==0)
	return ;
	else {
			Naturals(n-1);
			printf("%d ", n); }

}
//returns the sum of the numbers from n to m
int SumOf(int n, int m,int sum ){

	if(m<=n)
		return sum;

	else {
		return SumOf(n, m-1,sum + m);
	}
}
//returns the sum of the numbers from the first natural number till to the nth , n =50, sum of 1 to 50 , 1+2+3+4...+50
// revised



int sumRange(int n, int m) {
    // Base case
    if (n == m) {
        return n; // Sum of a single number is the number itself
    } else if (n > m) {
        // Swap n and m if n is greater than m
        int temp = n;
        n = m;
        m = temp;
        }

    // Recursive step
    return n + sumRange(n + 1, m);
}

/*int SumOf(int n,int sum ){

	if(n==0)
		return sum;

	else {
		return SumOf(n-1,sum + n);
	}
}*/


// prints the nth term
int Fibo(int n){
	if(n == 0) return 0;

	else if(n == 1) return 1;

	else {

		return Fibo(n-1) + Fibo(n-2);
	}
}
// Prints Fibo sequence upto nth term
void printFibo(int n, int a, int b, int count) {
    if (count < n) {
        printf("%d ", a);
        printFibo(n, b, a + b, count + 1);
    }
}

void printArrayElements(int arr[], int size, int index){

	if(index < size){
		printf("%d", arr[index]);
		printArrayElements(arr, size, index + 1);
	}

}

// my solution
//int countDigits(int n, int ctr){

//	if(n==0)
//	return ctr;
	//else{

	//return countDigits(n/10, ctr + 1);

//}
//}
// vs solution chat gpt
int countDigits(int n) {
    int ctr = 0;
    if (n == 0)
        return ctr;
    else {
        ctr = 1 + countDigits(n / 10); // Add 1 to the count and recursively call countDigits
        return ctr; // Return the total count
    }
}
// print array
void printArray(int arr[], int index, int size){
	if(index < size){
		printf("%d", arr[index]);
		printArray(arr, index + 1, size);
	}
	else return;
}
// palindrome checker
void isPal(char* str, int start, int size){
	if(start>=size){

	printf("Is a palindrome");
	return;
	}
	else{
		if(str[start] != str[size-1])
		printf("Is not a palindrome");
	}
	return isPal(str, start + 1, size - 1);

}
// decimal to binary
int RecursiveD2B(int n, int bin,int base){


	if(n==0){
		return bin;
	}else{
		return RecursiveD2B(n/2, bin + n % 2 * base, base * 10);
	}
}
// binary to decimal
int RecursiveB2D(int n, int dec){
	static int i=0;
	if(n == 0)
	return dec;
	else {

		return RecursiveB2D(n/10, dec + (n % 10) * pow(2,i++));

	}
}
// geometric progression with given r and nth number and startning num
void Geo(int n, int r, int start){

	if(n == 0){
		return;
	}

	printf("%d ", start);
	Geo(n-1,r,start*r);

}

void printNth(int n){
	if(n <= 0){
		return;
	}
	printNth(n-1);
	printf("%d", n);
}


int GCD(int n1, int n2){
	if(n2!=0){
		return GCD(n1, n1 % n2);

	}
	return n1;
}
/*int LCM(int num1, int num2){
	int gcd = GCD(num1, num2);
	return LCM(num1 * num2)/ gcd;
}*/


int arraySum(int arr[], int size) {
    if (size <= 0) {
        return 0; // Base case: sum of an empty array is 0
    } else {
        return arr[size - 1] + arraySum(arr, size - 1); // Recursive call
    }
}
double power(double base, int exponent){
	if(exponent <= 0){
		return 1;
	}
	return  base * power(base,exponent - 1);
}


int sum_of_powers(int x, int n) {

    if (n == 0) {
        return 0;
    }


    return pow(x, n) + sum_of_powers(x, n - 1);
}
