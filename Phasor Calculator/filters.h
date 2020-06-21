#pragma once

typedef double filterConstant;

filterConstant RCFilterConstant(double resistance, double capacitance) {
    return 1 / (2 * pi * resistance * capacitance);
}

filterConstant RLFilterConstant(double resistance, double inductance) {
    return resistance / (2 * pi * inductance);
}

complex<double> lowPassFilter(filterConstant Fb, double frequency) {
    return inverse(complex<double>(1, frequency / Fb));
}

complex<double> highPassFilter(filterConstant Fb, double frequency) {
    return complex<double>(0, frequency / Fb) / complex<double>(1, frequency / Fb);
}