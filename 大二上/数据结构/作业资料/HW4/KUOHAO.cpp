#pragma warning(disable:4996)
#include"stdio.h"
#include <stack> 
#include "string"
#include "iostream"
bool paren( std::string exp, int lo, int hi) {
	//���ʽ����ƥ���飬�ɼ����������
	std::stack<char> S; //ʹ��ջ��¼�ѷ��ֵ���δƥ���������
	for (int i = lo; i <= hi; i++) { /* ��һ��鵱ǰ�ַ� */
		switch (exp[i]) {
			//������ֱ�ӽ�ջ������������ջ��ʧ�䣬����ʽ�ز�ƥ��
		case '(': case '[': case '{': S.push(exp[i]); break;
		case ')': 
		{
			if ((S.empty()) || ('(' != S.top())) {
				S.pop();
				return false;
			}
			else S.pop();
			break;
		}
		case ']': 
		{
			if ((S.empty()) || ('[' != S.top())) {
				S.pop();
				return false;
			}
			else S.pop();
			break;
		}
		case '}': 
		{
			if ((S.empty()) || ('{' != S.top())) {
				S.pop();
				return false;
			}
			else S.pop(); 
			break; 
		}
		default: break; //�������ַ�һ�ɺ���
		}

		//�������ʽɨ�����ջ�����Բ����������ţ���ƥ�䣻����ջ�գ�ƥ��
	}
	return S.empty();
}

int main() {
	int n;
	scanf("%d", &n);
	std::string str;
	for (int i = 0; i < n; i++) {
		std::cin >> str;
		printf("%d\n", paren(str, 0, str.size()-1));
	}
	return 0;
}