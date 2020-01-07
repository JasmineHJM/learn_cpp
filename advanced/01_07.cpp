#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>

using namespace std;
//给定两个数组，编写一个函数来计算它们的交集。

class Solution {
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
	{
		vector<int>rec;
		unordered_map<int, int>map;
		for (int i = 0; i<nums1.size(); i++)
			map[nums1[i]] += 1;
		for (int i = 0; i<nums2.size(); i++)
		if (map[nums2[i]]>0)
		{
			rec.push_back(nums2[i]);
			map[nums2[i]] -= 1;
		}

		return rec;

	}
};
