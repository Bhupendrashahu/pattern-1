#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,j;
    printf("Enter the for print row and column \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf(" * ");
        }

        printf("\n");
    }
    getch();
}
