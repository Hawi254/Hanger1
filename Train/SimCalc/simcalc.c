#include <stdio.h>

int main() {

	float num1;
	float num2;
	float add;
	float sub;
	float multi;
	float div;

	printf("Enter first Number: ");
	scanf("%f" , &num1);

	printf("Enter second number: ");
	scanf("%f" , &num2);

	add = num1 + num2;
	sub = num1 - num2;
	multi = num1 * num2;
	div = num1 / num2;

	if (num1 == 0) {
		printf("Number not allowed");
	}	
	else {

	printf("Addition: %f\n , Subtraction %f\n , Multiplicatin: %f\n Division: %f\n" , add , sub , multi , div);
	}
	return 0;

}
