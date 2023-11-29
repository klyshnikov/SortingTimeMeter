//
// Created by mihail on 28.11.23.
//

#include "VectorGenerator.h"

VectorGenerator::VectorGenerator() : min_value(0), max_value(1) {}

VectorGenerator::VectorGenerator(int minValue, int maxValue) :
                                        min_value(minValue),max_value(maxValue) {}

int VectorGenerator::createRandomInFrame() {
    int diff = max_value-min_value;

    int rnd = rand();
    rnd *= (double(diff)/RAND_MAX);
    rnd += min_value;

    return rnd;
}

std::vector<int> VectorGenerator::generateVector(size_t size) {
    std::vector<int> v(size);
    for (int i = 0; i<size; ++i) {
        v[i] = createRandomInFrame();
    }

    return v;
}

void VectorGenerator::makeSwap(std::vector<int> &mas) {
    auto index_generator = VectorGenerator(0, mas.size());
    int one_idx = index_generator.createRandomInFrame();
    int two_idx = index_generator.createRandomInFrame();
    std::swap(mas[one_idx], mas[two_idx]);
}

void VectorGenerator::makeSwaps(std::vector<int> &mas, int amount) {
    for (int i = 0; i < amount; ++i) {
        makeSwap(mas);
    }
}









