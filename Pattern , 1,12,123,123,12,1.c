//            Question :
// 1
// 12
// 123
// 123
// 12
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
            printf("%d ",cal);
        }printf("\n");
    }
     for(row = N;row >= 1; row--)
    {
        for(cal = 1; cal <=row; cal++)
        {
            printf("%d ",cal);
        }printf("\n");
    }
}
