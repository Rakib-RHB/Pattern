

//            Question :

// 1234
//  123
//   12
//    1





int main ()
{
    int N, row, cal;
    printf("Enter N : ");
    scanf("%d",&N);
    for(row = N; row >= 1; row--)
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




