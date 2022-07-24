// Develop a program to find whether a given string is pallindrome or not

int main()
{
    char str[max];
    int i = 0 , j;

    printf("\n input the string : ");
    scanf("%s", str);

    j = strlen(str)-1;

    while (i<=(strlen(str))/2)
    {
        if(str[i] != str[j])
            break;
        
        i++;
        j--;

    }

    if (i>=j)
    {
        printf("\n String is palindrome ");
    }

    else
    {
        printf("\n String is not palindrome ");
    }
    
    return 0;

}