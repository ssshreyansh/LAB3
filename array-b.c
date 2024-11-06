#include <stdio.h>

int main() {
    int transactions[] = {200, -150, -500, -400, -50, -200, 300};
    int balance = 1000;
    int tobeprocessed[10];
    int unprocessedIndex = 0;


for (int i = 0; i < 7; i++) {
        if (transactions[i] < 0 && (balance + transactions[i]) < 0) {
            printf("Invalid transaction: %d \n", transactions[i]);
            tobeprocessed[unprocessedIndex++] = transactions[i];
            continue;
        }

         balance += transactions[i];

        if (balance == 0) {
                    printf("No further transactions will be processed.\n");
                    break;
                }
        
}

    printf("Final balance: %d AED\n", balance);
    printf("Unprocessed transactions: ");
    for (int j = 0; j < unprocessedIndex; j++) {
        printf("%d ", tobeprocessed[j]);
    }
    printf("\n");

    return 0;
}
