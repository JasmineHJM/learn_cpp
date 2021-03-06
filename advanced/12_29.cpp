#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>
#include<string>

using namespace std;
//给一非空的单词列表，返回前 k 个出现次数最多的单词。
class Solution{
public:
	class Compare{
	public:
		// 在set中进行排序时的比较规则    
		bool operator()(const pair<string, int>& left, const pair<string, int>& right){
			return left.second > right.second; 
		}
};
vector<string>topKFrequent(vector<string>& words, int k){    
	// 用<单词，单词出现次数>构建键值对，然后将vector中的单词放进去，统计每个单词出现的 次数   
	map<string, int> m;     
	for (size_t i = 0; i < words.size(); ++i)        
		++(m[words[i]]);

			// 将单词按照其出现次数进行排序，出现相同次数的单词集中在一块   
	multiset<pair<string, int>, Compare> ms(m.begin(), m.end());

			// 将相同次数的单词放在set中，然后再放到vector中 
	set<string> s;    
	size_t count = 0;   // 统计相同次数单词的个数   
	size_t leftCount = k;              
	vector<string> ret;     
	for (auto& e: ms){    
		if (!s.empty()){      
			// 相同次数的单词已经全部放到set中         
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