#include <iostream>
using namespace std;

int main (){
  //in C++ int is signed by default, 2^(31-1)
  int s32 = 0;
  //2^(32-1)
  unsigned int u32 = 0;

  cout << "32-bit before decrement:" << endl;
  cout << "  signed:   " << s32 << endl;
  cout << "  unsigned: " << u32 << endl;

  s32--;
  u32--;
 
  cout << "32-bit after decrement:" << endl;
  cout << "  signed:   " << s32 << endl;
  cout << "  unsigned: " << u32 << endl;

  //2^(15-1) the one being the sign
  short s16 = 32767;
  //2^(16-1) because you don't need a bit for the sign!
  unsigned short u16 = 65535;

  cout << "16-bit before increment:" << endl;
  cout << "  signed:   " << s16 << endl;
  cout << "  unsigned: " << u16 << endl;

  s16++;
  u16++;

  cout << "16-bit after increment:" << endl;
  cout << "  signed:   " << s16 << endl;
  cout << "  unsigned: " << u16 << endl;

  return 0;
}

