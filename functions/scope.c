#include <stdio.h>

void fun() {
    int x = 0;
    ++x;
    printf("%d", x);
}
void main() {

    fun();
    fun();
    fun();
}
