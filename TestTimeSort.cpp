//
// Created by mihail on 28.11.23.
//


#include "TestTimeSort.h"
#include "algorithm"
#include "chrono"

std::vector<std::vector<int>> TestTimeSort::createFirstGroup() {
    std::vector<std::vector<int>> v{};
    for (int i = 500; i <= 4000; i += 100) {
        v.emplace_back(vectorGenerator.generateVector(i));
    }

    return v;
}

std::vector<std::vector<int>> TestTimeSort::createSecondGroup() {
    std::vector<std::vector<int>> v = createFirstGroup();
    for (auto vec:v) {
        std::sort(vec.begin(), vec.end(), [](int l, int r) {return l>=r;});
    }
    return v;
}

std::vector<std::vector<int>> TestTimeSort::createThirdGroup() {
    std::vector<std::vector<int>> v = createFirstGroup();
    for (auto vec:v) {
        std::sort(vec.begin(), vec.end(), [](int l, int r) {return l<=r;});
        vectorGenerator.makeSwaps(vec, 25);
    }
    return v;
}

void TestTimeSort::testTime(std::vector<std::vector<int>>& mas) {
    for (auto& vec:mas) {
        auto start = std::chrono::high_resolution_clock::now();
        customSort->sort(vec);
        //std::sort(vec.begin(), vec.end());
        //for (int i = 0; i<1000000000; i++ ) {}
        auto elapsed = std::chrono::high_resolution_clock::now() - start;
        long long millisec = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
        std::cout << vec.size() << " " << millisec << std::endl;
    }
}


