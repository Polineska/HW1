#include <iostream>
#include <string>
#include <map>
#include <vector>

int main() {
    std::map<int, std::vector<std::string>> students;

    int classNum;
    std::string lastName;

    while (std::cin >> classNum >> lastName) {
        students[classNum].push_back(lastName);
    }

    for (int i = 9; i <= 11; ++i) {
        for (const std::string& name : students[i]) {
            std::cout << i << " " << name << std::endl;
        }
    }

    return 0;
}