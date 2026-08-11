/*Your job is to find the length of the longest word in a text with no punctuation or special characters of any kind - only contains words. To do so, please write a C-program that takes as a input first the number of words in a text, followed by all of the words in the text. The output of your program should be the length of the longest word in the text.

To simplify your program, you can assume that the longest word will not exceed 100 characters.

 

Examples
Input:
14
This is a simple example text
we have to find the largest word length
Output:
7
Input:
7
All cats are grey in the dark
Output:
4*/

#include <stdio.h>

int main() {
    int n, i = 0, max = 0, len;
    char word[101];

    scanf("%d", &n);

    while (i < n) {
        scanf("%s", word);

        len = 0;
        while (word[len] != '\0') {
            len++;
        }

        if (len > max) {
            max = len;
        }

        i++;
    }

    printf("%d", max);

    return 0;
}