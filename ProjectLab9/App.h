#pragma once

#include <cmath>
#include <cstdint>
#include <iostream>

constexpr uint16_t IterationsLimit = 1024;

struct MethodRes
{
	float Root;
	uint16_t Iterations;
};

using PolyFunc = float(*)(const float);
using MethodFunc = MethodRes(*)(float, float, float, const PolyFunc&);

inline float Polynomial1(const float x)
{
	return x * x - 4;
}

inline float Polynomial2(const float x)
{
	return 3 * x - 4 * std::log(x) - 5;
}

inline float GetDerivative(const float x, const float eps, const PolyFunc& polyFunc)
{
	return ((polyFunc(x + eps) - polyFunc(x)) / eps);
}

inline float GetDerivative2(const float x, const float eps, const PolyFunc& polyFunc)
{
	return ((GetDerivative(x + eps, eps, polyFunc) - GetDerivative(x, eps, polyFunc)) / eps);
}

MethodRes BisectionMethod(const float a, const float b, const float eps,
						  const PolyFunc& polyFunc);

MethodRes NewtonMethod(const float a, const float b, const float eps,
					   const PolyFunc& polyFunc);