#pragma once

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
    return complex<double>((double)resistance, 0.0);
}