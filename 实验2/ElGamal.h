#include <iostream>
#include <string>
#include <boost/multiprecision/cpp_int.hpp>
#include <boost/random.hpp>
#include <boost/multiprecision/miller_rabin.hpp>


using namespace boost::multiprecision;
using namespace boost::random;

cpp_int generate_prime(int bits, mt19937 &rng);
cpp_int string_to_cpp_int(const std::string &str);
std::string cpp_int_to_string(cpp_int num);
