#ifndef _HEX_HPP_
#define _HEX_HPP_

namespace Crypto
{
  namespace Hex
  {

    int toDecimal(char c)
    {
      switch(c)
      {
        case '0':
          return 0;
        case '1':
          return 1;
        case '2':
          return 2;
        case '3':
          return 3;
        case '4':
          return 4;
        case '5':
          return 5;
        case '6':
          return 6;
        case '7':
          return 7;
        case '8':
          return 8;
        case '9':
          return 9;
        case 'a':
          return 10;
        case 'b':
          return 11;
        case 'c':
          return 12;
        case 'd':
          return 13;
        case 'e':
          return 14;
        case 'f':
          return 15;
      }
      return -1;
    }

    char toHexChar(int i)
    {
      switch(i)
      {
        case 0:
          return '0';
        case 1:
          return '1';
        case 2:
          return '2';
        case 3:
          return '3';
        case 4:
          return '4';
        case 5:
          return '5';
        case 6:
          return '6';
        case 7:
          return '7';
        case 8:
          return '8';
        case 9:
          return '9';
        case 10:
          return 'a';
        case 11:
          return 'b';
        case 12:
          return 'c';
        case 13:
          return 'd';
        case 14:
          return 'e';
        case 15:
          return 'f';
      }
      return 0;
    }
  }

#endif
