#ifndef HEADER_H
#define HEADER_H
#include<iostream>
#include<iomanip>
#include<cmath>
#include<stdlib.h>
#include<vector>
#include<fstream>
#include<chrono>
#include<thread>
#include <cstdlib>
#include <ctime>
using namespace std;
template <class T>
class QueueNode {
public:
    T data;
    QueueNode* next;

    QueueNode(const T& value) : data(value), next(nullptr) {}
};
#endif 