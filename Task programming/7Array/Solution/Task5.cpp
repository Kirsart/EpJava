#include <stdio.h>

int	main()
{

    int n, a[16], b[16], z = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) a[i] = 0;
    a[0] = 1;
    b[0] = 0;
    printf("%d\n", a[0]);
 
    while (z<n)
    {
        z++;
        for (int i = 1; i <= z; i++) b[i] = a[i - 1] + (a[i]*i);
        printf("%d", b[0]);
        for (int i = 1; i < z; i++) printf(" %d", b[i]);
        printf("\n");
        for (int i = 0; i <= z; i++) a[i] = b[i];
        
    }
}
