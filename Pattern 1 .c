//               Question:



// Enter N : 5
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5






int main()
{
    int N, row, col;
    printf("Enter N : ");
    scanf("%d", &N);
    for(row = 1; row <= N; row++)
    {
        for(col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }
        printf ("\n");

    }
}

