#pragma once

template<typename T, typename E>
inline dcomp sin(T mag, E theta) {
	return polar((double)mag, ((double)theta) - pi / 2);
}

template<typename T, typename E>
inline dcomp sindeg(T mag, E theta) {
	return polar((double)mag, ((double)theta) * pi / 180 - pi / 2);
}

template<typename T, typename E>
inline dcomp cos(T mag, E theta) {
	return polar((double)mag, ((double)theta));
}

template<typename T, typename E>
inline dcomp cosdeg(T mag, E theta) {
	return polar((double)mag, ((double)theta) * pi / 180);
}
 