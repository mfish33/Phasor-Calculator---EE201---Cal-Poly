#pragma once
#include "shared.h"

/* AC Waveforms */
template<typename T, typename E>
dcomp sin(T mag, E theta);

template<typename T, typename E>
dcomp sindeg(T mag, E theta);

template<typename T, typename E>
dcomp cos(T mag, E theta);

template<typename T, typename E>
dcomp cosdeg(T mag, E theta);