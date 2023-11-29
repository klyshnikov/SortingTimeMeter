//
// Created by mihail on 28.11.23.
//

#include <vector>
#include "iostream"

#ifndef MERGE_INSERTION_SORT_VECTORGENERATOR_H
#define MERGE_INSERTION_SORT_VECTORGENERATOR_H

class VectorGenerator {
public:
    int min_value;
    int max_value;

    VectorGenerator();
    VectorGenerator(int minValue, int maxValue);

    int createRandomInFrame();
    std::vector<int> generateVector(size_t size);
    void makeSwap(std::vector<int>& mas);
    void makeSwaps(std::vector<int>& mas, int amount);


};

#endif //MERGE_INSERTION_SORT_VECTORGENERATOR_H
