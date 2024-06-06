#include <stdio.h>
int reverseNumber(int num,int rev) 
{
    if (num== 0)
	 {
        return rev;
    } else {
        return reverseNumber(num / 10, rev * 10 + num % 10);
    }
}
int main()
{
    int number, reversedNumber;
    printf("Enter a number: ");
    scanf("%d", &number);
    reversedNumber = reverseNumber(number, 0);
    printf("Reversed Number: %d", reversedNumber);
    return 0;
}
