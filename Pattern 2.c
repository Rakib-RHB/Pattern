//               Question:



// Enter N : 5
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5






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

