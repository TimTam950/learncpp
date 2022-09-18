#ifndef CONSTANTS_OLD
#define CONSTANTS_OLD

// way of defining constants prior to c++17
// fine for smaller apps, but requires each file that utilizes this header
// to rewrite these variables to that file
namespace constants
{
	constexpr double pi{ 3.14159 };
	constexpr double avogadro{ 6.0221413e23 };
	constexpr double gravity{ 9.81 };
}
#endif // !

