#include <iostream>
#include <string>

class Solution {
public:
    int hammingWeight(int n) { 
        //std::string bin = "";
        int counter = 0;
        while(n > 0)
        {
            if(n&1) ++counter;
           //std::cout << (n&1) <<" ";
            n >>= 1;
        }
        return counter;
    }
};

int main()
{
    using namespace std;
    Solution s;
    cout<<s.hammingWeight(0) << endl;
}