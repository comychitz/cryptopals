#include "../HexToBase64.hpp"
#include <iostream>
#include <assert.h>

int main( int argc, const char *argv[] )
{
  std::string hex = "49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d"; 
  std::string expected = "SSdtIGtpbGxpbmcgeW91ciBicmFpbiBsaWtlIGEgcG9pc29ub3VzIG11c2hyb29t"; 

  std::string hex2 = "1c0111001f010100061a024b53535009181c"; 
  std::string expected2 = "HAERAB8BAQAGGgJLU1NQCRgc"; 

  std::string base64 = base64::encode(hex);
  std::cout << base64 << " ?= " << expected << std::endl;
  assert(base64 == expected);

  std::string base64_2 = base64::encode(hex2);
  std::cout << base64_2 << " ?= " << expected2 << std::endl;
  assert(base64_2 == expected2);

  return 0;
}
