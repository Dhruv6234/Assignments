#include<stdio.h>
float area,redius,length,breadth, height,base;
main()
{
	int choose;
	printf("Choose the given option\n");
	printf("1.Area of Circle\n2.Area of Rectangle\n3.Area of Triangle\n");
	scanf("%d",&choose);
	
	
switch(choose)
{
	case 1:
	{
	 printf("Enter Redius of Circle\n");
      scanf("%f",&redius);
	 area= 3.14 * redius * redius;
	 printf("Area of Circle = %f",area);
	 break;
	}
	case 2:
		{
		
		printf("Enter length of Rectangle\n");
		scanf("%f",&length);
		printf ("Enter breadth of Rectangle\n");
		scanf("%f",&breadth);
		area=  length* breadth;
		printf("Area of Rectangle=%f", area);
			  break;	
		}
		case 3:
			{ 
			printf("Enter height of Triangle\n");
			scanf("%f",&height);
			printf("Enter base of Triangle\n");
			scanf("%f",&base);
			area=0.5*height* base;
			printf("Area of Triangle = %f\n",area);
			break;
			}
	
		
		
     default:
	{
	 printf("ivalid choice\n");
	 break;
	}
}


}
