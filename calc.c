#include <stdio.h>

float sum(float first, float second){
	float result = 0;
	result = first + second;
	return result;
}

float sub(float first, float second){
	float result = 0;
	result = first - second;
	return result;
}

float div(float first, float second){
	float result = 0;
	result = first / second;
	return result;
}

float mult(float first, float second){
	float result = 0;
	result = first * second;
	return result;
}


int main(){

	printf("Welcome to the calculator!\n");
	float first = 0.0;
	float second = 0;
	printf("Enter the first number: ");
	scanf("%f", &first);
	int selection = 0;
	printf("Select the operation you want to do\n");
	printf("type 1 for sum\ntype 2 for sub\ntype 3 for mult\ntype 4 for div\n");
	scanf("%d", &selection);
	printf("Enter the second number: ");
	scanf("%f", &second);

	if (selection == 1)
	{
		printf("%f",sum(first, second));
	}
	if (selection == 2){
		printf("%f",sub(first, second));
	}
	if (selection == 3){
		printf("%f",mult(first, second));
	}
	if (selection == 4){
		printf("%f",div(first, second));
	}
}



