/*calculator*/
# include<stdio.h>
int main()
{
    int a,b,sum,difference,multiplication;
    float division;
    printf("enter the number:\n");
    scanf("%d",&a);
    printf("enter the number:\n");
    scanf("%d",&b);
    sum=a+b;
    printf("the sum of two numbers is :%d\n",sum);
    difference=a-b;
    printf("the difference of two numbers is:%d\n",difference);
    multiplication=a*b;
    printf("the multiplication of two numbers is :%d\n",multiplication);
    division=(float)a/b;
    printf("the division of two numbers is :%f\n",division);
    return 0;
}