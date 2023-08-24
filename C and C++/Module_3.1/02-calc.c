# include <stdio.h>
int main(){
	char calc;
	int Num_A, Num_B;
	
	
	printf("Add first Number \n");
	scanf("%d", &Num_A);
	printf("Add second Number \n");
	scanf("%d", &Num_B);
	
	printf("What you want \n");
	scanf(" %c", &calc);
	
	switch(calc){
		case '+':{
			printf("%d", Num_A + Num_B);
			break;
		}
		case '-':{
				printf("%d", Num_A - Num_B);
			break;
		}
		case '/':{
				printf("%d", Num_A / Num_B);
			break;
		}
		case '*':{
				printf("%d", Num_A * Num_B);
			break;
		}
		case '%':{
				printf("%d", Num_A % Num_B);
			break;
		}
		default:{
				printf("%d", Num_A + Num_B);
				printf("%d", Num_A - Num_B);
				printf("%d", Num_A / Num_B);
				printf("%d", Num_A * Num_B);
				printf("%d", Num_A % Num_B);
			break;
		}
	}
	
}