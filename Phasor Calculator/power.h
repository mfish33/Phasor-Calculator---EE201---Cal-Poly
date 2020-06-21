#pragma once

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
