#pragma once
#include <complex>
using namespace std;

#define pi 3.14159
typedef complex<double> dcomp;

complex<double> inverse(complex<double> c) {
    auto complexOne = complex<double>(1, 0);
    return complexOne / c;
}