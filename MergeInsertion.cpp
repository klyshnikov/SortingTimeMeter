//
// Created by mihail on 28.11.23.
//

#include "MergeInsertion.h"

MergeInsertion::MergeInsertion(int insertion_amount) : insertionAmount(insertion_amount) {}

MergeInsertion::MergeInsertion() : insertionAmount(0) {}

void MergeInsertion::sort(std::vector<int>& mas) {
    if (mas.size() <= 1) {
        return;
    }

    if (mas.size() <= insertionAmount) {
        insertionSort(mas);
        return;
    }

    std::vector<int> left(mas.size()/2);
    std::vector<int> right(mas.size() - mas.size()/2);

    for (int i = 0; i<mas.size()/2; ++i) {
        left[i] = mas[i];
    }

    for (int i = mas.size()/2; i<mas.size(); ++i) {
        right[i - mas.size()/2] = mas[i];
    }

    MergeInsertion::sort(left);
    MergeInsertion::sort(right);

    splitSort(left, right, mas);
}

void MergeInsertion::insertionSort(std::vector<int>& mas) {
    for (int i = 1; i<mas.size(); ++i) {
        int cur = i;
        while (cur != 0 && mas[cur-1] > mas[cur]) {
            std::swap(mas[cur], mas[cur-1]);
            --cur;
        }
    }
}

void MergeInsertion::splitSort(std::vector<int> left, std::vector<int> right, std::vector<int>& mas) {
    int l = 0;
    int r = 0;
    int mas_it = 0;
    while (l < left.size() || r < right.size()) {
        if (l == left.size()) {
            mas[mas_it] = right[r];
            ++r;
            ++mas_it;
        } else if (r == right.size()) {
            mas[mas_it] = left[l];
            ++l;
            ++mas_it;
        } else {
            if (left[l] < right[r]) {
                mas[mas_it] = left[l];
                ++l;
                ++mas_it;
            } else {
                mas[mas_it] = right[r];
                ++r;
                ++mas_it;
            }
        }
    }
}


