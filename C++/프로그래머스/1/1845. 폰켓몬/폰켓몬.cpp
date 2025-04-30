#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int numSize = nums.size()/2;
    sort(nums.begin(), nums.end());
    
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    
    if(numSize >nums.size()){
        return nums.size();
    }
    else return numSize;
}