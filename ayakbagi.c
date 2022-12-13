//Print a lengthy statement using a loop.

//Bir döngü kullanarak şu cümleyi yazdırın.
// cümle : Başarının önündeki bütün ayak bağlarından kurtulmalısın.  Bütün akrabaya, eşe ve dosta hoşçakal demeyi göze almalısın. 'Your only limit is you.'

#include<stdio.h>
int main()
{
char sentence[1000];
printf("Please enter sentence:");
int index =0;
    scanf("%c",&sentence[index]);
while(sentence[index]!='\n')
{
    scanf("%c",&sentence[++index]);
}
index=0;
while(sentence[index]!= '\n')
{
    printf("%c",sentence[index]);
    ++index;
}
printf("\n");
}
//Here we first printed the content of the sentence we wrote, letter by letter, until the letters were finished.

