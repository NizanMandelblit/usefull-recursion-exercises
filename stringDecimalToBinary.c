#include <stdio.h>

int power(int x) {
    if (x == 0) {
        return 1;
    }
    return 2*power(x-1);
}

int ff(char* str,int index ,int val) {
    if (index == 0) {
        return val;
    }
    if (str[index-1]-'0' == 1) {
        val =val+ power(index-1);
    }
    ff(str,index-1 ,val);
}


/*
int g(char* str, int val) {
    if (str[0] == '\0') {
        return 0;
    }

    return (str[0] - '0') * val + g(str + 1, val/2);
}

int f(char* str, int len) {
    int val = power(len-1);
    return g(str, val);
}
*/
int main() {
    printf("%d\n", ff("01000010", 8, 0));//READS FROM LEFT TO RIGHT
/*
    printf("%d\n", f("01000010", 8));
    */
}
