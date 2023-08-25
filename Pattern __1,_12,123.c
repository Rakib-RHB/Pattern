
//            Question :

//     1
//    12
//   123
//  1234



int main ()
{
    int N, row, cal;
    printf("Enter N : ");
    scanf("%d",&N);
    for(row = 1; row <= N; row++)
    {
        for(cal = 1; cal <= N-row ; cal++)
        {
            printf(" ");
        }
        for(cal = 1; cal <= row ; cal++)
        {
            printf("%d",cal);
        }
        printf("\n");
    }


}



