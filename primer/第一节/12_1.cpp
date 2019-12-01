#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
#include<vector>
//给定一个有序但经过多次移位的数组，移动次数未知，在O(logN)时间复杂度只能找出元素x在数组中的位置。
class Finder {
public:
	int findElement(vector<int> A, int n, int x)
	{
		// 使用[left, right]区间表示A数组中的所有元素     
		int left = 0, right = n - 1;
		while (left <= right)
		{
			// 找到区间的中间位置，然后用x与中间位置元素比较         
			int mid = left + ((right - left) >> 1);
			// 相等代表找到，直接返回中间位置        
			if (x == A[mid])
				return mid;
			if (x > A[mid])
			{
				//A[mid] < A[left] 说明右边是有序的，且 x > A[right]说明x在mid左边   
				if (A[mid] < A[left] && x > A[right])
					right = mid - 1;
				else
					left = mid + 1;
			}
			else
			{
				//A[mid]>A[left]说明左边是有序的，且x<A[left]，说明x在mid右边    
				if (A[mid] > A[left] && x < A[left])
					left = mid + 1;
				else
					right = mid - 1;
			}
		}
		return -1;
	}
};