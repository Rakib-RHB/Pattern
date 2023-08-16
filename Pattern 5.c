//               Question:



// Enter N : 5

// A
// A B
// A B C
// A B C D
// A B C D E






int main()
{
    int N, row, col;
    printf("Enter N : ");
    scanf("%d", &N);
    for(row = 1; row <= N; row++)
    {
        for(col = 1; col <= row; col++)
        {
            printf("%c ", col+64); // small letter (+96);
        }
        printf ("\n");

    }
}



