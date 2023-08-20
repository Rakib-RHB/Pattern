
//   *
//  * *
// * * *
//  * *
//   *




int main()
{
    int N, row, cal;
    printf("Enter N:");
    scanf("%d", &N);
    for(row = 1; row <= N; row ++)
    {
        for(cal = 1; cal <= N - row; cal ++)
        {
            printf(" ");

        }for(cal = 1; cal <= row; cal ++)
        {

            printf("* ");
        }

        printf("\n");

    }
    for(row = N-1; row >= 1; row --)
    {
        for(cal = 1; cal <= N - row; cal ++)
        {
            printf(" ");

        }for(cal = 1; cal <= row; cal ++)
        {

            printf("* ");
        }

        printf("\n");

    }




}

