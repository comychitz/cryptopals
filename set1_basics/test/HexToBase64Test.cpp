#include "../HexToBase64.hpp"
#include <iostream>
#include <assert.h>

int main( int argc, const char *argv[] )
{
  std::string hex = "49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d"; 
  std::string expected = "SSdtIGtpbGxpbmcgeW91ciBicmFpbiBsaWtlIGEgcG9pc29ub3VzIG11c2hyb29t"; 

  std::string base64 = base64::encode(hex);

  std::cout << base64 << " ?= " << expected << std::endl;
  assert(base64 == expected);
  return 0;
}
