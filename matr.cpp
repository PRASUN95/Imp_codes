#include <stdio.h>
#include <stdlib.h>
int ROW,COL;

int min(int a, int b)
{ return (a < b)? a: b; }

int min(int a, int b, int c)
{ return min(min(a, b), c);}


int max(int a, int b)
{ return (a > b)? a: b; }


void diagonalOrder(int matrix[][])
{
    for (int line=1; line<=(ROW + COL -1); line++)
    {
       
        int start_col =  max(0, line-ROW);

       
         int count = min(line, (COL-start_col), ROW);


        for (int j=0; j<count; j++)
            printf("%d ", matrix[min(ROW, line)-j-1][start_col+j]);


    }
}


int main()
{
	
	scanf("%d%d",&ROW,&COL);
    int M[ROW][COL];
	for(int i=0;i<ROW;i++)
	{
		for(int j=0;j<COL;j++)
		scanf("%d",&M[i][j]);
	}
    diagonalOrder(M);
    return 0;
}
