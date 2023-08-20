// *
// **
// * *
// *  *
// *   *
// ******





int main()
{
    int N, row, cal;
    printf("Enter N:");
    scanf("%d", &N);
    for(row = 1; row <= N; row++)
    {
        for(cal = 1; cal <= N; cal++)
        {
            if(cal == 1 || row == N || cal == row)
             {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }





}
