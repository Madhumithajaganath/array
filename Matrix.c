#include<stdio.h>
int main()
{
    int mat[10][10];
    int i,j,m,n;
    printf ("Enter number of rows: ");
    scanf ("%d",&m);
    printf ("Enter number of columns: ");
    scanf ("%d",&n);
    printf ("Enter the elements: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf ("%d",&mat[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf ("%d\t",mat[i][j]);
        }
        printf ("\n");
    }
}
