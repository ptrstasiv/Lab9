#include "pch.h"

#include "App.h"

MethodRes BisectionMethod(const float a, const float b, const float eps,
						  const PolyFunc& polyFunc)
{
	MethodRes res;

	if (std::abs(polyFunc(a)) <= eps)
	{
		res.Root = a;
		res.Iterations = 1;

		return res;
	}
	else if (std::abs(polyFunc(a)) <= eps)
	{
		res.Root = b;
		res.Iterations = 1;

		return res;
	}

	float c = 0.0f;
	uint16_t iterationsCount = 0;

	float mA = a;
	float mB = b;

	while (1)
	{
		c = (mA + mB) / 2.0f;

		if (std::abs(polyFunc(c)) <= eps
			|| iterationsCount >= IterationsLimit)
		{
			res.Root = c;
			res.Iterations = iterationsCount;

			break;
		}

		if (polyFunc(mA) * polyFunc(mB) < 0.0f)
			mB = c;
		else
			mA = c;

		++iterationsCount;
	}

	return res;
}

MethodRes NewtonMethod(const float a, const float b, const float eps,
					   const PolyFunc& polyFunc)
{
	float x = a;

	if (polyFunc(x) * GetDerivative2(x, eps, polyFunc) < 0.0f)
	{
		x = b;

		if (polyFunc(x) * GetDerivative2(x, eps, polyFunc) < 0.0f)
			std::cout << "For the specified interval result is not guaranteed!\n";
	}

	uint16_t iterations = 0;

	while (1)
	{
		if (iterations >= IterationsLimit)
			break;

		float d = polyFunc(x) / GetDerivative(x, eps, polyFunc);
		x = x - d;

		++iterations;

		if (std::abs(d) <= eps)
			break;
	}

	MethodRes res;
	res.Root = x;
	res.Iterations = iterations;

	return res;
}