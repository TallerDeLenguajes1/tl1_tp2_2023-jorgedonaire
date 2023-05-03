#include <stdio.h>
#define N 20

int main(){
    int i;
    double vt[N], *p;
    p = vt;
    for(i = 0;i<N; i++) //seria un while hasta N ya que esta incrementando p++
    {
        *p = 1+rand()%100;
        printf("%f ", *p);
        p++;
    }

    getchar();
    return 0;
}
