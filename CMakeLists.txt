cmake_minimum_required(VERSION 3.6)
project(Algorithem_String)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp SuffixTrees/suffixTree.h SuffixTrees/node.h SuffixTrees/edge.h SuffixTrees/suffixTree.cpp SuffixTrees/edge.cpp SuffixTrees/node.cpp SuffixTrees/stree2006.cpp)
add_executable(Algorithem_String ${SOURCE_FILES})