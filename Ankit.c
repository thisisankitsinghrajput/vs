#include <stdio.h>
/*
int main()
{
    int age;
    printf("MY name is Ankit Singh Rajput\n");

    printf("Enter your age....\n");
    scanf("%d",&age);

    printf("You have entered %d as your age\n",age);

    switch (age)
    {
    case 18 :
        printf("Your age is 18\n");
        break;
    
    default:
         printf("Your age is not required go back\n");
        break;
        
    }


int main()
{
    int num = 0;

    printf("Enter the Number\n");
    scanf("%d", &num);

    do
    {
        num = num + 1;
        printf("%d\n", num);
    } while (num < 10);
*/
/*
int main()
{
     int i;
    printf("Enter the number\n");
    scanf("%d", &i);

    for (i, "%d"; i < 25; i++)
    {
        printf("%d\n", i);
    }
    return 0;

}
*/

/*int main()
{
    float i;
    printf("Enter the Number\n");
    scanf("%f", &i);

    printf("%f\n", i*0.621);

    return 0;
}
*/

int fbb(int n)
{
    if (n == 1 || n == 2)
    {
        return n;
    }
    else
    return (fbb(n-1) + (n-2));
}
