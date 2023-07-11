#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("create.txt", "w");
    int num;

    printf("Enter your number: \n");
    scanf("%d", &num);

    fprintf(ptr, "Your number is: %d\n", num);
    fclose(ptr);
    return 0;
}