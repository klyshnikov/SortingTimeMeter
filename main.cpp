#include <iostream>
#include "vector"
#include "MergeInsertion.h"
#include "VectorGenerator.h"
#include "TestTimeSort.h"
#include "Merge.h"

void getResultMergeInsertion1(TestTimeSort tts) {
    std::vector<std::vector<int>> vectors;
    vectors = tts.createFirstGroup();
    tts.testTime(vectors);
}

void getResultMergeInsertion2(TestTimeSort tts) {
    std::vector<std::vector<int>> vectors;
    vectors = tts.createSecondGroup();
    tts.testTime(vectors);
}

void getResultMergeInsertion3(TestTimeSort tts) {
    std::vector<std::vector<int>> vectors;
    vectors = tts.createThirdGroup();
    tts.testTime(vectors);
}

void getResultMerge1(TestTimeSort tts) {
    std::vector<std::vector<int>> vectors;
    vectors = tts.createFirstGroup();
    tts.testTime(vectors);
}

void getResultMerge2(TestTimeSort tts) {
    std::vector<std::vector<int>> vectors;
    vectors = tts.createSecondGroup();
    tts.testTime(vectors);
}

void getResultMerge3(TestTimeSort tts) {
    std::vector<std::vector<int>> vectors;
    vectors = tts.createThirdGroup();
    tts.testTime(vectors);
}

int main() {
    int insertion_amount;
    std::cin >> insertion_amount;

    auto mi = MergeInsertion();
    mi.insertionAmount = insertion_amount;

    auto m = Merge();

    auto vg = VectorGenerator();
    vg.min_value = 0;
    vg.max_value = 3000;

    auto tts1 = TestTimeSort();
    tts1.customSort = &mi;
    tts1.vectorGenerator = vg;

    auto tts2 = TestTimeSort();
    tts2.customSort = &m;
    tts2.vectorGenerator = vg;

    //getResultMergeInsertion1(tts1);
    getResultMergeInsertion2(tts1);
    //getResultMergeInsertion3(tts1);

    //getResultMerge1(tts2);
    //getResultMerge2(tts2);
    //getResultMerge3(tts2);
}
