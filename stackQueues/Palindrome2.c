//palindrome
#include<stdio.h>
#include<string.h>
int isPalindrome(char[]);

int main()
{
    char word[10];
    int i;
    printf("Input the word: ");
    scanf("%s",word);
    printf("%s",word);
    isPalindrome(word);
    if (isPalindrome(word))
        printf("          the word is a palindrome. ");
    else
        printf("          not a palindrome");
}

int isPalindrome(char word[10])
{
    int i,len=0;
    len=strlen(word);
    for(i=0;i<len;i++)
    {
	printf("%d\n",word[i]);
        if(word[i]!=word[len-i])
            continue;
        else if (word[i]!=word[len-i])
        {
            break;
            return(0);
        }
    }
    return(1);
}
