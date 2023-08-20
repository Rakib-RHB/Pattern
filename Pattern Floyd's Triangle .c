// 1
// 2 3
// 4 5 6
// 7 8 9 10



int main()
{
    int N, row, cal, count;
    count= 0;
    printf("Enter N :");
    scanf("%d", &N);
    for(row = 1; row <= N ; row ++)
    {
        for(cal = 1; cal <= row; cal ++)
        {
            printf("%d ", ++count);
        }
        printf("\n");
    }





}
