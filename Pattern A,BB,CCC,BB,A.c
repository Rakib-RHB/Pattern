
//            Question :
// A
// B B
// C C C
// B B
// A




int main ()
{
    int N, row, cal;
    printf("Enter N : ");
    scanf("%d",&N);
    for(row = 1;row <= N; row++)
    {
        for(cal = 1; cal <=row; cal++)
        {
            printf("%c ",row+64);
        }printf("\n");
    }
     for(row = N - 1;row >= 1; row--)
    {
        for(cal = 1; cal <=row; cal++)
        {
            printf("%c ",row+64);
        }printf("\n");
    }
}



