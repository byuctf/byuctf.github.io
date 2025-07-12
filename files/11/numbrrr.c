#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

__attribute__((constructor)) void flush_buf() {
    setbuf(stdin, NULL);
    setbuf(stdout, NULL);
    setbuf(stderr, NULL);
}

void vuln() {
    int num1, num2, sum;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    if (num1 < 0 || num2 < 0) {
      puts("Please only input positive numbers.");
      return;
    }

    sum = num1 + num2;
    printf("num1 + num2 = %d\n", sum);

    if (sum < 0) {
      char flag[256];

      FILE *flagfile = fopen("/ctf/flag.txt", "r");

      if (flagfile == NULL) {
        puts("Cannot read flag.txt.");
      } else {
        fgets(flag, 256, flagfile);
        flag[strcspn(flag, "\n")] = '\0';
        puts(flag);
      }
    } else {
      puts("Nope");
    }
}

int main() {
    vuln();
    return 0;
}
