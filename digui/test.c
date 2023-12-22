/* 测试程序仅为示例，实际的测试程序可能不同 */
#include <stdio.h>
#include <string.h>
#define MAXLENGTH 100
int isPalindrome(const char* str, char* pch);
int main(){
    char str[MAXLENGTH],mid;
    scanf("%s",str);
    if(isPalindrome(str, &mid))
        printf("是回文！中间字符是%c\n",mid);
    else
        printf("不是回文！中间字符是%c\n",mid);
    return 0;
}

int isPalindrome(const char* str,char*pch)
{
    int a=1;
    int n=strlen(str);
    for(int i=0;i<n/2;i++)
    {
        if(*(str+i)==*(str+n-1-i))
            continue;
        else
        {
            a=0;
            break;
        }
    }

    *pch=*(str+n/2);

    return a;
}