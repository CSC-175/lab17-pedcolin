// Definition of findHigh function goes here
#include <iostream>
using namespace std;
template <typename A, typename B>
void findHigh(A array[], int size, int &index, B &highnum) {
    highnum=array[0];
    for (int i=0; i <size; i++) {
        if (array[i] > highnum) {
            index=i;
            highnum = array[i];
        }
    }
}