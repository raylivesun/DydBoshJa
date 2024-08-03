#include <string.h>
#include <stdio.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    char result[256];

    // Concatenate str1 and str2 into result
    strcat(result, str1);
    strcat(result, " ");
    strcat(result, str2);

    printf("Concatenated string: %s\n", result);

    // Reverse the order of characters in result
    int length = strlen(result);
    for (int i = 0; i < length / 2; i++) {
        char temp = result[i];
        result[i] = result[length - i - 1];
        result[length - i - 1] = temp;
    }

    printf("Reversed string: %s\n", result);

    // Check if the reversed string is a palindrome
    int isPalindrome = 1;
    for (int i = 0; i < length / 2; i++) {
        if (result[i] != result[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }
    printf("Is the reversed string a palindrome? %s\n", isPalindrome ? "Yes" : "No");

    return 0;
}