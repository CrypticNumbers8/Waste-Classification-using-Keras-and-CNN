#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Best practice violation - No comments explaining code
void printString(char *string) {
    printf(string);
}

int main() {
    // Syntax error - Missing semicolon
    int x = 5
    int y = 10;

    // Security vulnerability - Format string vulnerability
    char *input = malloc(100);
    scanf("%s", input);
    printf(input);

    // Best practice violation - No error handling
    char *buffer = malloc(100);
    memcpy(buffer, "Hello, world!", 13);
    printf("%s\n", buffer);

    // Security vulnerability - Integer overflow
    int a = 2000000000;
    int b = 2000000000;
    int c = a + b;
    printf("%d + %d = %d\n", a, b, c);

    // Security vulnerability - Unsanitized input
    char name[50];
    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    // Security vulnerability - Use of unsafe functions
    char *username = "admin";
    char *password = "password";
    char login[50];
    sprintf(login, "LOGIN: %s / %s\n", username, password);
    printf("%s", login);

    // Performance issue - Recalculating same values multiple times
    for (int i = 0; i < 1000000; i++) {
        printf("The value of pi is: %f\n", 3.14);
    }

    // Security vulnerability - Use of insecure encryption
    char message[100] = "Secret message";
    char key[10] = "password";
    for (int i = 0; i < strlen(message); i++) {
        message[i] = message[i] ^ key[i % strlen(key)];
    }
    printf("Encrypted message: %s\n", message);
    for (int i = 0; i < strlen(message); i++) {
        message[i] = message[i] ^ key[i % strlen(key)];
    }
    printf("Decrypted message: %s\n", message);

    // Security vulnerability - Uninitialized variable
    char password[20];
    if (strcmp(password, "secret") == 0) {
        printf("Access granted!\n");
    } else {
        printf("Access denied!\n");
    }

    return 0;
}