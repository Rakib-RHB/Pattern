// *    *
//  *  *
//   **
//  *  *
// *    *


int main()
{
    int N, row, cal;
    printf("Enter N:");
    scanf("%d", &N);
    for(row = 1; row <= N; row++)
    {
        for (cal = 1; cal <= N; cal ++)
        {
            if(row == cal || row + cal == N + 1)
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
