#ifndef _BASE_64_HPP_
#define _BASE_64_HPP_

#include "Hex.hpp"
#include <string>
#include <map>

namespace base64 
{

static void populateBase64Vals(std::map<int,char> &vals)
{
  vals[0] = 'A';
  vals[1] = 'B';
  vals[2] = 'C';
  vals[3] = 'D';
  vals[4] = 'E';
  vals[5] = 'F';
  vals[6] = 'G';
  vals[7] = 'H';
  vals[8] = 'I';
  vals[9] = 'J';
  vals[10] = 'K';
  vals[11] = 'L';
  vals[12] = 'M';
  vals[13] = 'N';
  vals[14] = 'O';
  vals[15] = 'P';
  vals[16] = 'Q';
  vals[17] = 'R';
  vals[18] = 'S';
  vals[19] = 'T';
  vals[20] = 'U';
  vals[21] = 'V';
  vals[22] = 'W';
  vals[23] = 'X';
  vals[24] = 'Y';
  vals[25] = 'Z';
  vals[26] = 'a';
  vals[27] = 'b';
  vals[28] = 'c';
  vals[29] = 'd';
  vals[30] = 'e';
  vals[31] = 'f';
  vals[32] = 'g';
  vals[33] = 'h';
  vals[34] = 'i';
  vals[35] = 'j';
  vals[36] = 'k';
  vals[37] = 'l';
  vals[38] = 'm';
  vals[39] = 'n';
  vals[40] = 'o';
  vals[41] = 'p';
  vals[42] = 'q';
  vals[43] = 'r';
  vals[44] = 's';
  vals[45] = 't';
  vals[46] = 'u';
  vals[47] = 'v';
  vals[48] = 'w';
  vals[49] = 'x';
  vals[50] = 'y';
  vals[51] = 'z';
  vals[52] = '0';
  vals[53] = '1';
  vals[54] = '2';
  vals[55] = '3';
  vals[56] = '4';
  vals[57] = '5';
  vals[58] = '6';
  vals[59] = '7';
  vals[60] = '8';
  vals[61] = '9';
  vals[62] = '+';
  vals[63] = '/';
}

static void exchange(int h[3], int b[2]) 
{
  b[0] = (h[0] << 2) + ((h[1] & 0xC) >> 2);
  b[1] = ((h[1] & 0x3) << 4) + h[2];
}

std::string hexencode(const std::string &hex)
{
  if(hex.empty() || hex.size() < 3)
  {
    return "";
  }
  std::map<int,char> base64Vals;
  populateBase64Vals(base64Vals);

  int h[3] = { 0, 0, 0 };
  int b[2] = { 0, 0 };

  std::string encoded;
  int count = 0;
  for(long long i = 0; i < hex.size(); i++)
  {
    h[count++] = Hex::toDecimal(hex[i]);
    if(count == 3) 
    {
      exchange(h, b);
      encoded += base64Vals[b[0]];
      encoded += base64Vals[b[1]];
      count = 0;
    }
  }

  while(count > 0 && count++ < 3)
  {
    encoded += '=';
  }
  return encoded;
}

}
#endif
