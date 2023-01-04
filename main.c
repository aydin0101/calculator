#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	double number1;
	double number2;
	char operator;
	
	printf("*******WELCOMETO CASIO CALCULATOR*********\n");
	
	printf("Enter a number");
	scanf("%lf", &number1);
	printf("Enter Operator (+,-,/,*)");
	scanf ("%c", &operator);
	printf("Enter a number");
	Scanf("%lf", &number2);
	
	if(operator == '+'){
		printf("%f",number1 + number2);
		
	}else if(operator == '-'){
		printf("%f",number1 - number2);
	}else if(operator == '/'){
		printf("%f",number1 / number2);
	}else if(operator == '*'){
		printf("%f",number1 * number2);
	}else{ printf("Invalid Operator");
	}
			
	return 0;
}
