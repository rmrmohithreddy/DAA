#include <stdio.h>
int nonRecursiveFactorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
int recursiveFactorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * recursiveFactorial(n - 1);
    }
}
int main() {
    int num = 4;
    int nonRecursiveResult = nonRecursiveFactorial(num);
    printf("Non-Recursive Factorial of %d is: %d\n", num, nonRecursiveResult);
    int recursiveResult = recursiveFactorial(num);
    printf("Recursive Factorial of %d is: %d\n", num, recursiveResult);
    return 0;
}
