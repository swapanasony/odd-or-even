#include <stdio.h>
int main()
{
    int i, n, a1 = 0, a2 = 1, nxtnum;
printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
for (i = 1; i <= n; ++i)
    {
        printf("%d, ", a1);
        nextTerm = a1 + a2;
        a1 = a2;
        a2 = nxtnum;
    }
    return 0;
}
