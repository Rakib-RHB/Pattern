
//               Question:



// Enter N : 5

// A
// B B
// C C C
// D D D D
// E E E E E






int main()
{
    int N, row, col;
    printf("Enter N : ");
    scanf("%d", &N);
    for(row = 1; row <= N; row++)
    {
        for(col = 1; col <= row; col++)
        {
            printf("%c ", row+64); // small letter (+96);
        }
        printf ("\n");

    }
}



