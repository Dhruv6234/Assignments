#include<stdio.h>
int main(){
	int Days , Year;
	char Ans;
	printf("If you want Days To Year press y \n");
	printf("If you want Year To days press d \n");
	scanf(" %c", &Ans);
	
	if (Ans == 'Y'){
		printf("1 Year = 365 Days \n");
		printf("Give days \n");
		scanf(" %d" , &Days);
		printf("%d", Days * 1 / 365);
		
	}else if(Ans == 'D'){
		printf("365 Days = 1 Year \n");
		printf("Give Year's' \n");
		scanf(" %d" , &Year);
		printf("%d", Year * 365 / 1);
	}else{
		printf("Stupid");
	}
	
}