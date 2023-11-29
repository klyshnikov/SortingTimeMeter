//
// Created by mihail on 28.11.23.
//

#include "iostream"
#include "VectorGenerator.h"
#include "vector"
#include "CustomSort.h"

#ifndef MERGE_INSERTION_SORT_TESTTIMESORT_H
#define MERGE_INSERTION_SORT_TESTTIMESORT_H

class TestTimeSort {
public:
    VectorGenerator vectorGenerator;
    CustomSort* customSort;

    std::vector<std::vector<int>> createFirstGroup();
    std::vector<std::vector<int>> createSecondGroup();
    std::vector<std::vector<int>> createThirdGroup();

    void testTime(std::vector<std::vector<int>>& mas);
};
#endif //MERGE_INSERTION_SORT_TESTTIMESORT_H
