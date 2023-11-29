cmake_minimum_required(VERSION 3.25)
project(MERGE_INSERTION_SORT)

set(CMAKE_CXX_STANDARD 17)

add_executable(MERGE_INSERTION_SORT main.cpp MergeInsertion.h MergeInsertion.cpp TestTimeSort.h VectorGenerator.h VectorGenerator.cpp CustomSort.h TestTimeSort.cpp Merge.cpp Merge.h)
