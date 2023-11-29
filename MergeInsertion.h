//
// Created by mihail on 28.11.23.
//

#include "iostream"
#include "vector"
#include "CustomSort.h"

#ifndef MERGE_INSERTION_SORT_MERGEINSERTION_H
#define MERGE_INSERTION_SORT_MERGEINSERTION_H

class MergeInsertion : public CustomSort {
public:
    MergeInsertion();
    explicit MergeInsertion(int insertion_amount);
    void sort(std::vector<int>& mas) override;

    int insertionAmount;
    void insertionSort(std::vector<int>&);
    void splitSort(std::vector<int>, std::vector<int>, std::vector<int>&);
};

#endif //MERGE_INSERTION_SORT_MERGEINSERTION_H
