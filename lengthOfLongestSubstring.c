
#include <string.h>
#include "stdlib.h"
#include "stdio.h"

int lengthOfLongestSubstring(char * s){ 
    int i,k=0;
    int max = 0;
    int count = 0;
    int flag = 0;
    int len = strlen(s);
    for(i=0;i<=len;i++){
       
        if(s[i]==' '||i==len)
        {
                count=i-k;
                k=i+1;

        }
         
        if(count > max){
            max = count;
        }
        count = 0;
    }
    return max;
}

int main(){
    char s[] = "mekanin sahibi";
    printf("%d",lengthOfLongestSubstring(s));
    return 0;
}
