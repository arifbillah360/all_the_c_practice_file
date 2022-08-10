int main()
{
    int value[10], num, rem;

    printf("Enter the number\n");
    scanf("%d", &num);

    while(num>0)
    {
        rem = num % 10;

        if(value[rem] == 1)
            break;
        else
            value[rem] = 1;

        num = num / 10;
    }

    if(num)
        printf("RepededDigit\n");
    else
        printf("NonRepededDigit\n");

    return 0;
}
