#include <stdio.h>

#define MAX_LENGTH 1000

int countWords(char sentence[]) {
    int wordCount = 0;
    int i;

    for (i = 0; sentence[i] != '\0'; i++) {
        if ((sentence[i] == ' ' || sentence[i] == '\n') && sentence[i - 1] != ' ' && sentence[i - 
           1] != '\n') {
          
            wordCount++;
        }
    }

    
    if (sentence[i - 1] != ' ' && sentence[i - 1] != '\n') {
        wordCount++;
    }

    return wordCount;
}

int main() {
    char sentence[MAX_LENGTH];

    printf("Enter a sentence: ");
    fgets(sentence, MAX_LENGTH, stdin);

    int words = countWords(sentence);
    printf("Number of words: %d\n", words);

    return 0;
}