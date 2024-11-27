#include <iostream>
#include <cstdint>//Часть стандарта с с++11 для типа uint32_t

class Solution {
public:

    uint32_t reverseBits(uint32_t n) { 
        uint32_t answer = 0;
        //простое решение для дестичной системы счисления, для двоичной основание 2 для дестичной 10
      /* for(int i = 0; i < 32; ++i)
        {
            answer = (answer * 2) + n % 2;
            n /= 2;
        }*/

       //с побитовыми операциями
       for(int i = 0; i < 32; ++i)//потому что в условии сказано что число 32 битное и впереди скорее всего будут 0
       {
        answer = (answer<<1) | (n & 1);
        n >>= 1;
       }

        return answer;
    }
};

int main()
{
    using namespace std;
    Solution s;
    uint32_t n = 00000010100101000001111010011100;
    cout<<s.reverseBits(n)<<endl;
}