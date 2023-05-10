#include <iostream>

int main() {
    int N, K, M, total, aod, aob, lb, ld;
    total = aod = aob = lb = ld = 0;

    std::cin >> N >> K >> M;

    while (N >= K && K >= M) {
        aod = K / M;
        aob = N / K;
        ld = (K % M) * aob;
        lb = N % K;

        N = lb + ld;

        total += aob * aod;
    }

    std::cout << total;
}
