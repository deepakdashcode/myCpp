#include<stdio.h>
int main(){
    int n = 27;
    if(n&1) n+=1;
    for(int i = 0; i <= n; i ++)
    {
        for(int j = 0; j <= n; j ++)
        {
            if((i + 2*j) == n || (i + n) == (2*j) || (i == n/2) || (2*i - j) == n || (2*i + j) == (2*n))
            {
                printf("* ");
            }

            else
                printf("  ");
        }
        printf("\n");
    }
return 0;
}