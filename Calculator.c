#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define note "Maje Mat Le, Input A Valid Operation"

void Addition();
void Subtraction();
void Multiplication();
void Division();
void Modulus();
void Factorial();
void Power();
void Square();
void Cube();
void Squareroot();

int main() 
{
	int choose;
	printf("\n\t\t\t\t\t=======) Welcom To My Calculator (=======\n");
	printf("\t\t\t\t\t\t\t\t--by S-O-B-U\n\n");
	printf("=====>( Enter 0 To Exit The Program )<=====\n");
	printf("=>Enter 1 for Addition\n");
    printf("=>Enter 2 for Subtraction\n");
    printf("=>Enter 3 for Multiplication\n");
    printf("=>Enter 4 for Division\n");
    printf("=>Enter 5 for Modulus\n");
    printf("=>Enter 6 for Factorial\n");
    printf("=>Enter 7 for Power\n");
    printf("=>Enter 8 for Cube\n");
    printf("=>Enter 9 for Square\n");
    printf("=>Enter 10 for Squareroot\n");
    
    while(1)
	{
    	printf("\n\nEnter The Operation You Want To Do =>\n");
    	scanf("%d", &choose);
    	
    	switch(choose)
    	{
    	    case 1:
			    Addition();
				break; 
			case 2:
			    Subtraction();
				break;
			case 3:
			    Multiplication();
				break;
			case 4:
			    Division();
				break;
			case 5:
			    Modulus();
				break;
			case 6:
			    Factorial();
				break;
			case 7:
			    Power();
				break;
			case 8:
			    Square();
				break;	
			case 9:
			    Cube();
				break; 
			case 10:
			    Squareroot();
				break;	
			case 0:
		        exit(0);	
			default :
			    printf("!!ERROR!!\n");								 
			    printf("!!%s!!\n", note);
		}
	}
    return 0;
}

void Addition()
{
	int a, b;
	printf("Enter the numbers you want to add(a,b): ");
	scanf("%d%d", &a,&b);
	printf("The sum of a and b is %d\n",a+b);
}

void Subtraction()
{
	int a, b;
	printf("Enter the numbers you want to subtract(a,b): ");
	scanf("%d%d", &a,&b);
	printf("The subtraction of a and b is %d\n",a-b);
}

void Multiplication()
{
	int a, b;
	printf("Enter the numbers you want to multiply(a,b): ");
	scanf("%d%d", &a,&b);
	printf("The multiplication of a and b is %d\n",a*b);
}

void Division()
{
	int a, b;
	printf("Enter the numbers you want to divide(a/b): ");
	scanf("%d%d", &a,&b);
	printf("The division of a and b is %f\n",(float)a/(float)b);
}

void Modulus()
{
	int a, b;
	printf("Enter the numbers you want to find modulus of(a,b): ");
	scanf("%d%d", &a,&b);
	printf("The modulus of a and b is %d\n",a%b);
}

void Factorial()
{
	int n, factorial;

	printf("Enter the number you want the factorial of(n): ");
    scanf("%d",&n);
    factorial=1;
    for(int i=1; i<=n; i++)
    {
    	factorial=factorial*i;
	}
	printf("Factorial of %d is %d",n,factorial);
}

void Power()
{
	double a;
	double b;
	printf("Enter the base and the power(a^b): ");
	scanf("%lf%lf", &a,&b);
	double c=pow(a,b);
	printf("%lf to the power %lf is %lf", a,b,c);
}

void Square()
{
	double a;
	printf("Enter the number you want the square of(n): ");
	scanf("%lf", &a);
	double e=pow(a, 2);
	printf("The square of %lf is %lf",a,e);
}

void Cube()
{
	double a;
	printf("Enter the number you want the cube of(n): ");
	scanf("%lf", &a);
	double e=pow(a, 3);
	printf("The cube of %lf is %lf",a,e);
}

void Squareroot()
{
	double a;
	printf("Enter the number you want the squareroot of(n): ");
	scanf("%lf", &a);
	double b=sqrt(a);
	printf("The cube of %lf is %lf",a,b);
}