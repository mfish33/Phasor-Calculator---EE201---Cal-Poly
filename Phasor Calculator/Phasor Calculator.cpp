﻿// Modules
#include "shared.h"
#include "Waveforms.h"
#include "impedance.h"
#include "power.h"
#include "filters.h"
#include "printing.h"


int main()
{	
	/* Example Problem */
	auto Vs = sin(10, 0);
	auto C1 = capacitor(10e-6, 2000 * pi);
	auto L1 = inductor(10e-3, 2000 * pi);
	auto R1 = resistor(1000);

	auto Zeq = C1 + inverse(inverse(L1) + inverse(R1));
	print("Zeq = ");
	print(Zeq);
	// OUTPUT Zeq = 3.93231 + 46.6692i

	auto Is = Vs / Zeq;
	print("Is = ");
	printPhasordegfunc(Is, 2000 * pi);
	// OUTPUT: Is = 0.21cos(2000πt-175.184)
	auto VR1 = Vs - Is * C1;
	auto IR1 = VR1 / R1;
	print("IR1 = ");
	printPhasordegfunc(IR1, 2000 * pi);
	// OUTPUT: IR1 = 0.013cos(2000πt-88.78)


	auto P = calcPower(Vs, Is);
	printPower(P);
	//OUTPUT: Real Power: 0.0896364 imaginary power: 1.06382 reactive power: 1.06759
	printPowerFactor(P);
	// OUTPUT: The Power Factor is: 8.4%

}
