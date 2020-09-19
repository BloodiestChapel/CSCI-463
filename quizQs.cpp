#include <iostream>
using namespace std;
int main()
{
for (int i = 0; i < 32; i++)
   {
        cout  << (x & 0x80000000 ? '1':'0');
        x = x << 1;
        if(i % 4 == 0)
        {
             cout << " ";
        }
    }
}
