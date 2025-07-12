#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

__attribute__((constructor)) void flush_buf() {
    setbuf(stdin, NULL);
    setbuf(stdout, NULL);
    setbuf(stderr, NULL);
}

void win() {
  puts("Nice job!");
  char flag[256];

  FILE *flagfile = fopen("/ctf/flag.txt", "r");

  if (flagfile == NULL) {
    puts("Cannot read flag.txt.");
  } else {
    fgets(flag, 256, flagfile);
    flag[strcspn(flag, "\n")] = '\0';
    puts(flag);
  }
}

void vuln() {
    char name[32];
    printf("What's your name? ");
    gets(name);
    printf("Hi!\n");
}

int main() {
    vuln();
    return 0;
}
