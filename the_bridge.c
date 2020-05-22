#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int spans;
    int span_len;
    int sum = 0;

    if (argc != 3)
        return 0;
    spans = atoi(argv[1]);
    span_len = atoi(argv[2]);
    sum = span_len * (spans + 1) * spans / 2;
    printf("%d%c", sum, '\n');
}
