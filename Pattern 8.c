
//               Question:



// Enter N : 4

// 1 2 3 4
// 1 2 3
// 1 2
// 1






int main()
{
    int N, row, col;
    printf("Enter N : ");
    scanf("%d", &N);
    for(row = N; row >= 1; row--)
    {
        for(col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }
        printf ("\n");

    }
}



