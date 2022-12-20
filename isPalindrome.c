
#include "stdbool.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

bool isPalindrome(int x) {
    int i,j;
    int len = 0;
    bool flag = 0;
    char str[100];
    sprintf(str,"%d",x);
    len = strlen(str);
    for(i=0,j=len-1;i<len/2;i++,j--){
        if(str[i] != str[j]){
            flag = 1;
            break;
        }
    }
        return flag;
    }
    


int main() 
{
    int x = 121;
    printf("%d",isPalindrome(x)); //prints zero if the number is a palindrome
    return 0;
}
