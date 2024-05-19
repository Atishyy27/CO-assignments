#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void categorizeNumbers(const char *inputFile, const char *evenFile, const char *oddFile, const char *primeFile) {
    FILE *in = fopen(inputFile, "r");
    FILE *even = fopen(evenFile, "w");
    FILE *odd = fopen(oddFile, "w");
    FILE *prime = fopen(primeFile, "w");
    int num;

    if (in == NULL || even == NULL || odd == NULL || prime == NULL) {
        printf("Error opening files.\n");
        return;
    }

    while (fscanf(in, "%d", &num) != EOF) {
        if (num % 2 == 0) {
            fprintf(even, "%d\n", num);
        } else {
            fprintf(odd, "%d\n", num);
        }
        if (isPrime(num)) {
            fprintf(prime, "%d\n", num);
        }
    }

    fclose(in);
    fclose(even);
    fclose(odd);
    fclose(prime);
}

int main() {
    categorizeNumbers("numbers.txt", "even.txt", "odd.txt", "prime.txt");
    return 0;
}
