#include <stdio.h>

// objasnjenje
// https://stackoverflow.com/questions/76212741/need-an-explanation-on-how-did-the-lecturer-get-this-answer-in-this-recursive-pr/76213824#76213824

void rec(char *s);

int main(void) {

    rec("1234");
    printf("\n");
    rec("23");
    return 0;
}

void rec(char *s) {
    if (s[0] == 0) return;

    rec(s + 1);

    printf("%c", s[0]);

    rec(s + 1);

    printf("X");
}