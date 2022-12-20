
#include <string.h>
#include "stdlib.h"
#include "stdio.h"

int lengthOfLongestSubstring(char * s){ 
    int i;
    int max = 0;
    int count = 0;

    int len = strlen(s);
    for(i=0;i<len;i++)
    {
      if(s[i]==' ') { count = 0;}      
      else          { count++;  }
        
      if(count > max){  max = count; }
    }
    return max;
}

int main(){
    char s[] = "mekanin sahibi";
    printf("%d",lengthOfLongestSubstring(s));
    return 0;
}
