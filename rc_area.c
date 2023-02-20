#include <stdio.h>

//This is a program to calculate the area of a rectangle

int main() {
	int length, width, area;

	printf("Please Enter the length: ");

 	scanf("%d", &length);

	printf("Please Enter the width: ");

	scanf("%d", &width);

	if (width >= length) {
		
		printf("This is NOT a rectangle!");
	}
	else { 

	area = length * width;

	printf("The Area of The Rectangle is %d" , area);
	      }

	return 0;

}



