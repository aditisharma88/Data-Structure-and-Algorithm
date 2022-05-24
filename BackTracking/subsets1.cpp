// T.C = every element has two choices - so, O(2^n)
// S.C= O(2^n)

#include <iostream>
#include <vector>

using namespace std;

class solution
{
public:
    void generateSubsets(int currentIndex, vector<int> &nums, vector<int> &currentSubset, vector<vector<int>> &answer)
    {

        if (currentIndex >= nums.size())
        {
            vector<int> result = currentSubset;
            answer.push_back(result);
            return;
        }

        currentSubset.push_back(nums[currentIndex]);
        generateSubsets(currentIndex + 1, nums, currentSubset, answer);

        currentSubset.pop_back();
        generateSubsets(currentIndex + 1, nums, currentSubset, answer);

        return;
    }

    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> answer;
        vector<int> currentSubset;

        generateSubsets(0, nums, currentSubset, answer);
        return answer;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> nums;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    solution obj;
    vector<vector<int>> result = obj.subsets(nums);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j];
        }
        cout << "\n";
    }

    return 0;
}