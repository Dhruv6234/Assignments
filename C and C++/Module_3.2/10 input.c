# include<stdio.h>
int main(){
	int input[10];
	int Even = 0;
	int Odd =0;
	int Sum_Of_Even=0;
	int Sum_Of_Odd= 0 ;
	for(int i=0;i<10;){
		printf("add number %d = ",i + 1);
		scanf(" %d",&input[i]);
		i++;
	};
	for(int i=0;i<10;i++){
		(input[i] % 2 == 0)? Even++ : Odd++ ;
		Sum_Of_Even = Sum_Of_Even + Even;
		Sum_Of_Odd += Odd;
	};
	printf("Even  = %d \n",Even);
	printf("Odd  = %d \n",Odd);
	printf("Sum Of Even  = %d \n",Sum_Of_Even);
	printf("Sum Of Odd  = %d \n",Sum_Of_Odd);
}
