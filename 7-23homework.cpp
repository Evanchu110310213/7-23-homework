#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int guess(int g,int r,int min,int max)
{
        if( g<min || g>max )
        {
                printf("out of range\n");
                return 2;
        }
        else if(g<r)
        {
                printf("smaller than target\n");
                return 0;
        }
        else if(g>r)
        {
                printf("bigger than target\n");
                return 0;
        }
        else if(g==r)
        {
                printf("hitting\n");
                return 1;
        }
        return 0;
}
int main()
{
    srand(time(NULL));
    int minm = 1 ;
    int maxm = 100;
    int gn;
    int ch = 0;
    int rn = rand()%(maxm - minm+1) + minm;
    printf("random num:%d\n", rn);
    while (ch != 1)
    {
        printf("gusee a number(%d~%d):", minm, maxm);
        if(scanf("%d",&gn) != 1)
        {
            int c;
            printf("Invalid input.\n");
            while( (c=getchar()) !='\n' && c !=EOF);
        }
        else
        {
            ch = guess(gn,rn,minm,maxm);
            if (ch != 2)
            {
                if(gn < rn )
                {
                    minm = gn;
                }
                else if(gn > rn)
                {
                    maxm = gn;
                }
            }
        }
    }
}



