/*You are still conducting linguistic research! This time, you'd like to write a program to find out how many letters occur multiple times in a given word. Your program should read a word from the input and then sort the letters of the word alphabetically (by their ASCII codes). Next, your program should iterate through the letters of the word and compare each letter with the one following it. If these equal each other, you increase a counter by 1, making sure to then skip ahead far enough so that letters that occur more than twice are not counted again. You may assume that the word you read from the input has no more than 50 letters, and that the word is all lowercase.

 

Examples
Input:
apple
Output:
1
 

Input:
keeper
Output:
1
 

Input:
erroneousnesses
Output:
5
 

Input:
taylor
Output:
0*/

#include <stdio.h>

int main() {
    char word[51];
    int i = 0, j, len = 0 , count=0,temp;
    scanf("%s", word);
    while (word[len] != '\0') {
        len++;
    }
    i = 0;
    while (i < len - 1) {
        j = i + 1;

        while (j < len) {
            if (word[i] > word[j]) {
                temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
            j++;
        }

        i++;
    }
    i = 0;

    while (i < len - 1) {
        if (word[i] == word[i + 1]) {
            count++;

            
            while (i < len - 1 && word[i] == word[i + 1]) {
                i++;
            }
        }

        i++;
    }

    printf("%d", count);

    return 0;
}