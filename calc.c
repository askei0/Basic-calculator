#include <stdio.h>

float sum(float first, float second){
	return first + second;
}

float sub(float first, float second){
	return first - second;
}

float div(float first, float second){
	return first / second;
}

float mult(float first, float second){
	return first * second;
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
		printf("%f\n",sum(first, second));
	}
	else if (selection == 2){
		printf("%f\n",sub(first, second));
	}
	else if (selection == 3){
		printf("%f\n",mult(first, second));
	}
	else if (selection == 4){
		if(second == 0){
			printf("Division by zero\n");
		}
		else{
			printf("%f\n",div(first, second));
		}
	}
	else {
		printf("Invalid operation\n");
	}
}



