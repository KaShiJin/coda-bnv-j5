#include <stdlib.h>
#include <stdio.h>

void print_str(char *str)
{
	printf(" %s", str);
}
int add(int nb1, int nb2)
{
	int addi = nb1 + nb2;
}
double compute_average(double number1, double number2, double number3)
{
	double average = (number1 + number2 + number3) / 3;
	return(average);
}
int main()
{
	int number1;
	int number2;
	int number3;
	int nb1;
	int nb2;
	scanf("%d",&number1);
	scanf("%d",&number2);
	scanf("%d",&number3);
	print_str("Hello world\n");
	compute_average(number1 , number2, number3);
	double resultat = compute_average(number1 , number2, number3);
	printf("%lf\n", resultat);
	scanf("%d", &nb1);
	scanf("%d", &nb2);
	printf("%d\n", add(nb1, nb2));
}
