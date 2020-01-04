#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>

using namespace std;

//重复n次的元素
class Solution {
public:  
	int repeatedNTimes(vector<int>& A) 
	{
		size_t N = A.size() / 2;       
		// 用unordered_map统计每个元素出现的次数 
		unordered_map<int, int> m;     
		for(auto e : A)        
			m[e]++;           
		// 找出出现次数为N的元素  
		for(auto& e : m)      
		{          
			if(e.second == N)       
				return e.first; 
		}  
	}
};
//两个数组的交集I
class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
	{            
		// 用unordered_set对nums1中的元素去重     
		unordered_set<int> s1;    
		for (auto e : nums1)     
			s1.insert(e);
		// 用unordered_set对nums2中的元素去重     
		unordered_set<int> s2;      
		for (auto e : nums2)   
			s2.insert(e);
		// 遍历s1，如果s1中某个元素在s2中出现过，即为交集   
		vector<int> vRet;      
		for (auto e : s1)     
		{          
			if (s2.find(e) != s2.end())         
				vRet.push_back(e);      
		}               
		return vRet;   
	} 
};
