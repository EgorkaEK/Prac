#include <iomanip>
#include <complex>
std::complex<long double> cnum(std::complex<long double> z1, std::complex<long double> z2)
{
	using namespace std::complex_literals;
	return z1 * z2;
}