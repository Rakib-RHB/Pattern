

//               Question:



// Enter N : 4

// 4 4 4 4
// 3 3 3
// 2 2
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
            printf("%d ", row);
        }
        printf ("\n");

    }
}



