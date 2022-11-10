#include "array.h"
#include <string>
#include <format>
#include <iostream>
#include <stdexcept>

using namespace std;

template <typename T>
Array<T>::Array() {
    this->length = 0;
}

template <typename T> 
Array<T>::Array(T arr[]) {
    this->literalArr = arr;
    this->length = sizeOfArr<T>(arr);
}

template <typename T>
T Array<T>::get(int index) {
    if (index < 0 || index > this->length)
        throw invalid_argument("Index specified is out of array bounds! ARRAY LENGTH = {}, INDEX = {}", this->length, index);

    return this->literalArr[index];
}

int Array<T>::size() {
    return this->length;
}

template <typename T>
int sizeOfArr(T arr[]) {
    int loopSize = sizeof(arr) / sizeof(arr[0]);
    int length = 0;
    for (int i = 0; i < loopSize; i++) {
        if (arr[i] != NULL)
            length++;
    }

    return length;
}
