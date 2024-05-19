#include <stdio.h>

// Function to display the quiz question and options
void displayQuiz() {
    printf("What is the capital of Japan?\n");
    printf("A. Beijing\n");
    printf("B. Seoul\n");
    printf("C. Tokyo\n");
    printf("D. Bangkok\n");
}

// Function to determine and display whether the provided answer is correct or incorrect
void checkAnswer(char userAnswer) {
    if (userAnswer == 'C' || userAnswer == 'c') {
        printf("Correct! Well done.\n");
    } else {
        printf("Incorrect! The correct answer is C.\n");
    }
}

int main() {
    char userAnswer;
    displayQuiz();
    printf("Your answer (enter A, B, C, or D): ");
    scanf(" %c", &userAnswer);
    checkAnswer(userAnswer);

    return 0;
}
