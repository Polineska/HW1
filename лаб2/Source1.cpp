#include <iostream>
#include <set>

int main() {
    int N;
    std::cin >> N;

    std::set<int> uniqueNumbers;

    for (int i = 0; i < N; ++i) {
        int num;
        std::cin >> num;
        uniqueNumbers.insert(num);
    }

    std::cout << uniqueNumbers.size() << std::endl;

    return 0;
}