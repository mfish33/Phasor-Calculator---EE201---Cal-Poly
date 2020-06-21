#pragma once
#include <iostream>
#include <string>

template<typename T>
void print(T arg) {
    cout << arg << endl;
}

template<typename T>
void print(string message, T arg) {
    cout << message << arg << endl;
}

void printPhasor(complex<double> c) {
    cout << "magnitude is " << abs(c) << ". Theta is " << arg(c) << "." << endl;
}

void printPhasorfunc(complex<double> c, double omega) {
    auto plusSign = arg(c) > 0 ? "+" : "";
    cout << abs(c) << "cos(" << omega << "t" << plusSign << arg(c) << ")" << endl;
}

void printPhasordeg(complex<double> c) {
    cout << "magnitude is " << abs(c) << ". Theta is " << arg(c) * 180 / pi << "." << endl;
}

void printPhasordegfunc(complex<double> c, double omega) {
    auto plusSign = arg(c) > 0 ? "+" : "";
    cout << abs(c) << "cos(" << omega << "t" << plusSign << arg(c) * 180 / pi << ")" << endl;
}

void printPower(complex<double> P) {
    cout << "Real Power: " << real(P) << " imaginary power: " << imag(P) << " reactive power: " << abs(P) << endl;
}

void printPowerFactor(complex<double> P) {
    cout << "The Power Factor is: " << powerFactor(P) * 100 << "%" << endl;
}