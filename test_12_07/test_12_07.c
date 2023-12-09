#include <stdio.h>
#include <math.h>
int main(void)
{ // 寻找素数，并且每十个换一行
    int a, i;
    int n, m;
    int cnt = 0;
    scanf("%d %d", &m, &n);
    for (i = m; i <= n; i++)
    {
        for (a = 2; a <= sqrt(i); a++)
        {
            if (i % a == 0 || i < 2)
                break;
        }
        if (a > sqrt(i))
        {
            printf("%d", i);
            cnt++;
        }
    }
    return 0;
}