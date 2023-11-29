//
// Created by mihail on 28.11.23.
//

#include "iostream"
#include "vector"
#include "CustomSort.h"

#ifndef MERGE_INSERTION_SORT_MERGE_H
#define MERGE_INSERTION_SORT_MERGE_H

class Merge : public CustomSort {
public:
    Merge() = default;

    void sort(std::vector<int>& mas) override;
    void SplitSort(std::vector<int> left, std::vector<int> right, std::vector<int>& mas);

};

#endif //MERGE_INSERTION_SORT_MERGE_H
