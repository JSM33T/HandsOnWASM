#include <stdio.h>
//#include <stdlib.h>

unsigned long long fibonaccisum(int n) {
    unsigned long long a = 0, b = 1, temp, sum = 1;

    if (n <= 1) {
        return n;
    }

    for (int i = 2; i <= n; ++i) {
        temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}


//int/long overflow alternative
// void addArrays(int result[], int a[], int b[], int size) {
//     int carry = 0;
//     for (int i = size - 1; i >= 0; --i) {
//         result[i] = a[i] + b[i] + carry;
//         carry = result[i] / 10;
//         result[i] %= 10;
//     }
// }

// char* add2(int n) {
//     const int MAX_DIGITS = 1000;
//     int a[MAX_DIGITS] = {0};
//     int b[MAX_DIGITS] = {0};
//     int temp[MAX_DIGITS] = {0};

//     a[MAX_DIGITS - 1] = 1;
//     b[MAX_DIGITS - 1] = 1;

//     for (int i = 3; i <= n; ++i) {
//         addArrays(temp, a, b, MAX_DIGITS);
//         for (int j = 0; j < MAX_DIGITS; ++j) {
//             a[j] = b[j];
//             b[j] = temp[j];
//         }
//     }

//     // Find the first non-zero digit in the result
//     int index = 0;
//     while (temp[index] == 0 && index < MAX_DIGITS - 1) {
//         index++;
//     }

//     // Calculate the length of the result string
//     int length = MAX_DIGITS - index + 1;  // +1 for null terminator

//     // Allocate memory for the result string
//     char* result = (char*)malloc(length);

//     // Copy the result to the string
//     for (int i = 0; i < length - 1; ++i) {
//         result[i] = temp[index + i] + '0';
//     }

//     // Null-terminate the string
//     result[length - 1] = '\0';

//     return result;
// }

int main() {
    return 0;
}