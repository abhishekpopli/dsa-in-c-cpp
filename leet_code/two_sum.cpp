#include <iostream>
#include <vector>
#include <map>
#include <utility>

class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        std::vector<int> result;
        std::map<int, int> map;

        for (auto i = nums.begin(); i != nums.end(); ++i)
        {
            int num = *i;
            auto mapValue = map.find(num);

            if (mapValue != map.end())
            {
                result.push_back(mapValue->second);
                result.push_back(i - nums.begin());
            }
            else
            {
                std::pair<int, int> pair;
                pair.first = target - num;
                pair.second = i - nums.begin();

                map.insert(pair);
            }
        }

        return result;
    }
};