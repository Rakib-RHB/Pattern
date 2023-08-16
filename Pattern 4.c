//               Question:



// Enter N : 5
// 1
// 0 0
// 1 1 1
// 0 0 0 0
// 1 1 1 1 1






int main()
{
    int N, row, col;
    printf("Enter N : ");
    scanf("%d", &N);
    for(row = 1; row <= N; row++)
    {
        for(col = 1; col <= row; col++)
        {
            printf("%d ", row);
        }
        printf ("\n");

    }
}


