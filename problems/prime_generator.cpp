/*
  Prime Generator problem solution
  Author: Rakesh Kumar cpp.rakesh(at)gmail.com
  Date: Jan 8th, 2017
 */

#include <cstdio>
#include <cmath>

bool is_prime(int number) {
    if (number == 1)
        return false;
    for (int i = 2; i <= std::sqrt(number); ++i)
        if (number % i == 0)
            return false;
    return true;
}

int main() {
    int t = 0;
    scanf("%d", &t);

    while (t--) {
        int m = 0;
        int n = 0;
        scanf("%d %d", &m, &n);

        for (int i = m; i <=n; ++i)
            if (is_prime(i))
                printf("%d\n", i);
        printf("\n");
    }

    return 0;
}
