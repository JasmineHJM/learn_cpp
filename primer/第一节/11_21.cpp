#define _CRT_SECURE_NO_WARNINGS 1
//解决二进制存储数据不等长问题
#include<iostream>
#include<string>
//字符串相乘
/*
class Solution
 {
 public:
	 void AddItem(string &tmp, string &num1, char a)
	 {
		 int i = 0, sign = 0;
		 int mul = 0;
		 while (i<num1.size())
		 {
			 mul = (num1[i] - '0')*(a - '0') + sign;
			 if (mul >= 10)
			 {
				 sign = mul / 10;
				 mul %= 10;
			 }
			 else
				 sign = 0;
			 tmp.push_back(mul + '0');
			 i++;
		 }
		 if (sign > 0)
			 tmp.push_back(sign + '0');
	 }

	 void MoveAdd(string &result, string &tmp, int k)
	 {
		 int i, j;
		 i = k;
		 j = 0;
		 int sign = 0;
		 while (i<result.size() && j<tmp.size())
		 {
			 result[i] = AddItem(result[i] - '0', tmp[j] - '0', sign) + '0';
			 i++;
			 j++;
		 }
		 while (i<result.size() && sign)
		 {
			 result[i] = AddItem(result[i], 0, sign);
			 i++;
		 }
		 while (j<tmp.size())
		 {
			 
		 }
	 }

	 string multiply(string num1, string num2)
	 {
		 revere(num1.begin(), num1.end());
		 revere(num2.begin(), num2.end());

		 string tmp, result;
		 for (int i = 0; i < num2.size(); ++i)
		 {
			 AddItem(tmp, num1, num2[i]);
			 MoveAdd(result, tmp, i);
		 }
	 }
 }
*/
class Solution 
{
	public String multiply(String num1, String num2)
	{
		int n1 = num1.length() - 1;
		int n2 = num2.length() - 1;
		if (n1 < 0 || n2 < 0) 
		{
			return "";
		}
		// 常识两数相乘不会超过两者长度和
		int mul[] = new int[n1 + n2 + 2];

		for (int i = n1; i >= 0; i--) 
		{
			for (int j = n2; j >= 0; j--) 
			{
				int val = (num1.charAt(i) - '0') * (num2.charAt(j) - '0');
				val += mul[i + j + 1]; // 先把乘积加到低位, 再判断是否有新的进位

				mul[i + j] += val / 10; // 求高位
				mul[i + j + 1] = val % 10; // 求低位
			}
		}
		StringBuilder sb = new StringBuilder();
		int i = 0;
		// 去掉前导0
		while (i < mul.length - 1 && mul[i] == 0) 
		{
			i++;
		}
		while (i < mul.length)
		{
			sb.append(mul[i]);
			i++;
		}
		return sb.toString();
	}

	public static void main(String[] args) 
	{
		System.out.println(multiply("123456", "0"));
		System.out.println(multiply("25", "4"));
		System.out.println(multiply("2", "3"));
		System.out.println(multiply("123", "456"));
	}
}
