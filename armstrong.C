#include <stdio.h>
 
int main()
{
    int num, sum=0, rem=0,temp;
 
    printf("Enter an integer number: ");
    scanf("%d", &num);
 
    temp=num;
 
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum + (rem*rem*rem);
        temp=temp/10;
    }  
 
    if(sum==num)  
        printf("%d yes",num);
    else
        printf("%d no",num);
 
    return 0;
}
