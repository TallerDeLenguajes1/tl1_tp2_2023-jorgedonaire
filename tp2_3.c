#include <stdio.h>
#define N 5
#define M 7

int main()
{
    int i,j;
    int mt[N][M];
    int *p;
    p = mt;
    for(i = 0;i<N; i++)
    {
        for(j = 0;j<M; j++)
        {
            *p = 1+rand()%100;
            printf("%d ", mt[i][j]);
            p++;
        }
    printf("\n");
    }
    return 0;
}