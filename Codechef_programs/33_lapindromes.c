#include <stdio.h>
#define MAXCHAR 256

main()
{
    int T, i, mid, arr1[MAXCHAR], arr2[MAXCHAR], c, j;
    char S[20];

    for (i = 0; i < MAXCHAR; i++)
        arr1[i] = arr2[i] = 0;

    scanf("%d", &T);
    while (T--)
    {
        scanf(" %s", &S);
        while (S[i] != '\0')
            ++i;
        --i;
        if ((i % 2) == 0)
        {
            mid = i / 2;
            for (j = 0; j <= mid; j++)
            {
                c = S[j];
                ++arr1[c];
            }
            for (j = mid + 1; S[j] != '\0'; j++)
            {
                c = S[j];
                ++arr2[c];
            }
            for (j = 0; j < MAXCHAR; j++)
                if (arr1[j] != arr2[j])
                {
                    printf("NO\n");
                    break;
                }
            if (j == MAXCHAR)
                printf("YES\n");
        }
        else
        {
            mid = i / 2;
            for (j = 0; j < mid; j++)
            {
                c = S[j];
                ++arr1[c];
            }
            for (j = mid + 1; S[j] != '\0'; j++)
            {
                c = S[j];
                ++arr2[c];
            }
            for (j = 0; j < MAXCHAR; j++)
                if (arr1[j] != arr2[j])
                {
                    printf("NO\n");
                    break;
                }
            if (j == MAXCHAR)
                printf("YES\n");
        }
    }
}
