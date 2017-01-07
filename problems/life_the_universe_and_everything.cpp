/*
  Life the Universe And Everything
  Author: Rakesh Kumar cpp.rakesh(at)gmail.com
  Date: Jan 8th, 2017
 */

#include <cstdio>

int main() {
    int n = 0;
    while (1) {
        scanf("%d", &n);
        if (n == 42)
            break;
        else
            printf("%d\n", n);
    }
    
    return 0;
}
