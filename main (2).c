#include <stdio.h>
#include <string.h>

#define MAX_SENTENCES 5
#define MAX_LENGTH 1000

void displayLongestSentence(char sentences[][MAX_LENGTH], int numSentences) {
    int longestLength = 0;
    int longestIndex = 0;

    
    for (int i = 0; i < numSentences; i++) {
        int sentenceLength = strlen(sentences[i]);
        if (sentenceLength > longestLength) {
            longestLength = sentenceLength;
            longestIndex = i;
        }
    }

  
    printf("Longest Sentence:\n");
    printf("%s\n", sentences[longestIndex]);
}

int main() {
    char sentences[MAX_SENTENCES][MAX_LENGTH];

    printf("Enter %d sentences:\n", MAX_SENTENCES);
    for (int i = 0; i < MAX_SENTENCES; i++) {
        fgets(sentences[i], MAX_LENGTH, stdin);
    }

    displayLongestSentence(sentences, MAX_SENTENCES);

    return 0;
}