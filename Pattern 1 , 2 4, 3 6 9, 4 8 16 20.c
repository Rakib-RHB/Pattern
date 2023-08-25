
// 1
// 2 4
// 3 6 9
// 4 8 16 20

int main (){

int N, row, cal;
printf("Enter N :");
scanf("%d", &N);
for(row = 1; row <= N; row++)
{
    for(cal = 1; cal <= row; cal++){
        printf("%d ",cal * row);
    }printf("\n");
}



}
