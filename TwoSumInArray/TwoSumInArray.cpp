// TwoSumInArray.cpp : Defines the entry point for the console application.
//
/*Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return[0, 1].  */

#include "stdafx.h"

using namespace std;
vector<int> twoSum(vector<int>&, int);

int main()
{
	vector<int> num = { 2, 7, 11, 15 };
	int target = 9;
	vector<int> indices = twoSum(num, target);
	for (vector<int>::iterator it = indices.begin(); it != indices.end(); ++it)
	{
		cout << ' ' << *it;
	}
	getchar();
	return 0;

}

vector<int> twoSum(vector<int>& nums, int target) {
	vector<int>indices;
	//sort(nums.begin(), nums.end());
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] == target) {
			indices.push_back(nums[i]);
			return indices;
		}
		if (nums[i] > target) {
			cout << "No two combination of indices";
			return indices;
		}
		for (int j = i + 1; j < nums.size(); j++) {
			if (nums[i] == (target - nums[j])) {
				indices.push_back(i);			
				indices.push_back(j);		
				return indices;
			}
		}
	}
	cout << "No two combination of indices";
	return indices;
}