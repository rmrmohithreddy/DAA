#include <stdio.h>
int masterTheorem(int n)
{
    if (n==1) 
	{
        return 1;
    } else {
        return 2*masterTheorem(n/2)+n;
    }
}
int main()
{
    int n = 8;
    printf("Result using Master Theorem: %d\n", masterTheorem(n));
    return 0;
}
