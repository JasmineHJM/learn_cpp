#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
#include<vector>
//����һ�����򵫾��������λ�����飬�ƶ�����δ֪����O(logN)ʱ�临�Ӷ�ֻ���ҳ�Ԫ��x�������е�λ�á�
class Finder {
public:
	int findElement(vector<int> A, int n, int x)
	{
		// ʹ��[left, right]�����ʾA�����е�����Ԫ��     
		int left = 0, right = n - 1;
		while (left <= right)
		{
			// �ҵ�������м�λ�ã�Ȼ����x���м�λ��Ԫ�رȽ�         
			int mid = left + ((right - left) >> 1);
			// ��ȴ����ҵ���ֱ�ӷ����м�λ��        
			if (x == A[mid])
				return mid;
			if (x > A[mid])
			{
				//A[mid] < A[left] ˵���ұ�������ģ��� x > A[right]˵��x��mid���   
				if (A[mid] < A[left] && x > A[right])
					right = mid - 1;
				else
					left = mid + 1;
			}
			else
			{
				//A[mid]>A[left]˵�����������ģ���x<A[left]��˵��x��mid�ұ�    
				if (A[mid] > A[left] && x < A[left])
					left = mid + 1;
				else
					right = mid - 1;
			}
		}
		return -1;
	}
};