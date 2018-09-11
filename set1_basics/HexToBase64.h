#ifndef _HEX_TO_BASE_64_H_
#define _HEX_TO_BASE_64_H_

#include <string>
#include <unordered_map>

static void populateBase64Vals(unordered_map<int,char> &vals)
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

/**
 * convert a hex string to a base64 string
 */
std::string hexToBase64(const std::string &hex)
{
  if(hex.empty())
  {
    return "";
  }
  unordered_map<int,char> base64Vals;
  populateBase64Vals(base64Vals);

  std::string ret;
  for(long long i = 0; i < hex.size(); i++)
  {
    //
    // TODO
    //
  }
  return ret;
}

#endif
