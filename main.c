#include <stdio.h>

int main() {
    char message[141];
    int i = 0;

    printf("Enter your message: ");
    scanf("%140[^\n]", message);

    while (message[i] != '\0' && i < 140) {
        i++;
    }
  
    if (i == 140) {
        printf("Rejected\n");
    } else {
        printf("Posted\n");
    }

    return 0;
}


