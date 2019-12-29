#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>
#include<string>

using namespace std;
//��һ�ǿյĵ����б�����ǰ k �����ִ������ĵ��ʡ�
class Solution{
public:
	class Compare{
	public:
		// ��set�н�������ʱ�ıȽϹ���    
		bool operator()(const pair<string, int>& left, const pair<string, int>& right){
			return left.second > right.second; 
		}
};
vector<string>topKFrequent(vector<string>& words, int k){    
	// ��<���ʣ����ʳ��ִ���>������ֵ�ԣ�Ȼ��vector�еĵ��ʷŽ�ȥ��ͳ��ÿ�����ʳ��ֵ� ����   
	map<string, int> m;     
	for (size_t i = 0; i < words.size(); ++i)        
		++(m[words[i]]);

			// �����ʰ�������ִ����������򣬳�����ͬ�����ĵ��ʼ�����һ��   
	multiset<pair<string, int>, Compare> ms(m.begin(), m.end());

			// ����ͬ�����ĵ��ʷ���set�У�Ȼ���ٷŵ�vector�� 
	set<string> s;    
	size_t count = 0;   // ͳ����ͬ�������ʵĸ���   
	size_t leftCount = k;              
	vector<string> ret;     
	for (auto& e: ms){    
		if (!s.empty()){      
			// ��ͬ�����ĵ����Ѿ�ȫ���ŵ�set��         
			if (count != e.second){      
				if (s.size() < leftCount){
					ret.insert(ret.end(), s.begin(), s.end());           
					leftCount -= s.size();                    
					s.clear();                  
				}else{                    
					break;                
				}             
			}            
		}
		count = e.second; 
		s.insert(e.first);
		}
		for (auto& e : s){
			if (0 == leftCount)   
				break;

			ret.push_back(e);    
			leftCount--;
		}       
		return ret;
	}
};