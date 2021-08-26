#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main () {
        int i;
        time_t t;

/* Init random number generator */
        srand((unsigned) time(&t));

        char answers[20][50] = { 
                "Without a doubt",
                "Outlook not good",
                "...is a good title for your next book",
                "Of course",
                "The more you ignore it",
                "It will get stranger",
                "No certainty",
                "INSUFFICIENT DATA FOR MEANINGFUL ANSWER",
                "Not yet",
                "Sure as death",
                "My sources say no",
                "Get back to me after lunch",
                "The way I see it, yes",
                "You may rely on it",
                "Even a beggar would know the answer to that",
                "Even a priest would know the answer to that",
                "Even Einstein didn't know the answer to that",
                "I hope so?",
                "Ask again later",
                "Cannot predict now",
        };
        char question[100];
        printf("Ask a yes/no question: \n");
        fgets(question, 100, stdin);
        printf("\nThinking...\n");
        sleep(1);
        i = rand() % 20;
        printf("%s\n", answers[i]);

        return 0;
}
