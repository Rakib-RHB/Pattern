
//            Question :
// 1
// 2 2
// 3 3 3
// 2 2
// 1




int main ()
{
    int N, row, cal;
    printf("Enter N : ");
    scanf("%d",&N);
    for(row = 1;row <= N; row++)
    {
        for(cal = 1; cal <=row; cal++)
        {
            printf("%d ",row);
        }printf("\n");
    }
     for(row = N - 1;row >= 1; row--)
    {
        for(cal = 1; cal <=row; cal++)
        {
            printf("%d ",row);
        }printf("\n");
    }
}

