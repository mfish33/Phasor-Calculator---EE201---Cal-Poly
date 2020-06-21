/*
#include <complex>
#include <iostream>
#include <string>
#include <math.h> 

using namespace std;


complex<double> inverse(complex<double> c) {
    auto complexOne = complex<double>(1, 0);
    return complexOne / c;
}


template<typename T, typename E>
complex<double> sin(T mag,E theta) {
    return polar((double)mag, ((double)theta) - pi / 2);
}

template<typename T, typename E>
complex<double> sindeg(T mag, E theta) {
    return polar((double)mag, ((double)theta) * pi / 180 - pi / 2);
}

template<typename T, typename E>
complex<double> cos(T mag, E theta) {
    return polar((double)mag, ((double)theta));
}

template<typename T, typename E>
complex<double> cosdeg(T mag, E theta) {
    return polar((double)mag, ((double)theta) * pi / 180);
}


template<typename T, typename E>
complex<double> capacitor(T capacitance, E omega) {
    return inverse(complex<double>(0.0, (double)(omega * capacitance)));
}

template<typename T, typename E, typename W>
complex<double> capacitor(T capacitance, E omega, W resistance) {
    return complex<double>(resistance) + inverse(complex<double>(0.0, (double)(omega * capacitance)));
}

template<typename T, typename E>
complex<double> inductor(T inductance, E omega) {
    return complex<double>(0.0, (double)(omega * inductance));
}

template<typename T, typename E, typename W>
complex<double> inductor(T inductance, E omega, W resistance) {
    return complex<double>((double)resistance, (double)(omega * inductance));
}

template<typename T>
complex<double> resistor(T resistance) {
    return complex<double>((double) resistance, 0.0);
}




double powerFactor(complex<double> P) {
    return cos(arg(P));
}

double rms(complex<double> p) {
    return abs(p) / pow(2, .5);
}

double powerAngle(complex<double> V, complex<double> I) {
    return arg(V) - arg(I);
}

complex<double> calcPower(complex<double> V, complex<double> I) {
    return complex<double>(rms(V) * rms(I) * cos(powerAngle(V, I)), rms(V) * rms(I) * sin(powerAngle(V, I)));
}




typedef double filterConstant;

filterConstant RCFilterConstant(double resistance, double capacitance){
    return 1 / (2 * pi * resistance * capacitance);
}

filterConstant RLFilterConstant(double resistance, double inductance) {
    return resistance / (2 * pi * inductance);
}

complex<double> lowPassFilter(filterConstant Fb, double frequency) {
    return inverse(complex<double>(1,frequency/Fb));
}

complex<double> highPassFilter(filterConstant Fb, double frequency) {
    return complex<double>(0,frequency/Fb) / complex<double>(1,frequency/Fb);
}

template<typename T>
void print(T arg) {
    cout << arg << endl;
}

template<typename T>
void print(string message,T arg) {
    cout << message << arg << endl;
}

void printPhasor(complex<double> c) {
    cout << "magnitude is " << abs(c) << ". Theta is " << arg(c) << "." << endl;
}

void printPhasorfunc(complex<double> c,double omega) {
    auto plusSign = arg(c) > 0 ? "+" : "";
    cout << abs(c) << "cos(" <<omega << "t" << plusSign << arg(c) << ")" << endl;
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



int main()
{
    auto v1 = sin(5.0, 30.0);
    auto C1 = capacitor(5e-6, 6000);
    auto I1 = v1 / C1;
    auto P1 = calcPower(v1, I1);
    printPhasor(v1);
    printPower(P1);


}
*/