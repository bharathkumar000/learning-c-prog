/*You are conducting a linguistic study and are interested in finding words that contain the letter 't' or 'T' in the first half of the word (including the middle letter if there is one). Specifically, if the first half of the word does contain a 't' or a 'T', your program should output a 1. If the first half does not contain the letter 't' or 'T', but the second half does, then your program should output a 2. Otherwise, if there is no 't' or 'T' in the word at all, your program's output should be -1. You may assume that the word entered does not have more than 50 letters.

 

Examples
Input:
apple
Output:
-1
 

Input:
raincoat
Output:
2
 

Input:
enter
Output:
1*/

#include <stdio.h>

int main()
{
    char word[51];
    int len = 0,i=0,mid;
    scanf("%s", word);
    while (word[len] != '\0')
    {
        len++;
    }
    mid = (len + 1) / 2;
    i = 0;
    while (i < mid)
    {
        if (word[i] == 't' || word[i] == 'T')
        {
            printf("1");
            return 0;
        }

        i++;
    }
     while (i < len)
    {
        if (word[i] == 't' || word[i] == 'T')
        {
            printf("2");
            return 0;
        }

        i++;
    }
    printf("-1");
    return 0;
}