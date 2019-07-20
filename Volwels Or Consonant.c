#include<stdio.h>
int main()
{
    char ch;
    scanf("%d",&ch);
    if(ch==69||ch==65||ch==73||ch==79||ch==85||ch==97||ch==101||ch==105||ch==111||ch==117)
    printf("vowel");
    else if(ch>=65&&ch<=122)
    printf("Consonant");
    else
    printf("Invalid");
    return 0;
    
}
