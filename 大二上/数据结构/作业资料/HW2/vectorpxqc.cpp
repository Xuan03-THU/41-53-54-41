#pragma warning(disable:4996)
#include<vector>
#include<stdio.h>
#include<algorithm>


class pair {
private:
	int x;
	int y;
public:
	pair();
	bool operator>(const pair& p) const;
	bool operator<(const pair& p) const;
	bool operator>=(const pair& p) const;
	bool operator<=(const pair& p) const;
	bool operator==(const pair& p) const;
	void print();
	void get(int X, int Y);
};
//pair �ıȽϷ�ʽ��
//������Vi��Vj���ȱȽ����ǵ�x���xi > xj����Vi > Vj����xi < xj����Vi<Vj��
//��xi = xj��������Ƚ�y��Ĵ�С����yi<yj����vi<vj����yi>yj����vi>vj����xi = xj��yi = yj������ΪVi = Vj��
//���ǵ������ǣ�����һһ�����������������������в���ȵ��������С�����˳�������
bool pair::operator>(const pair& p) const {
	if (x > p.x)
	{
		return true;
	}
	else if (x < p.x)
	{
		return false;
	}
	else
	{
		if (y > p.y)
			return true;
		else
			return false;
	}
}
bool pair::operator<(const pair& p) const {
	if (x < p.x)
	{
		return true;
	}
	else if (x > p.x)
	{
		return false;
	}
	else
	{
		if (y < p.y)
			return true;
		else
			return false;
	}
}
bool pair::operator>=(const pair& p) const {
	if (x > p.x)
	{
		return true;
	}
	else if (x < p.x)
	{
		return false;
	}
	else
	{
		if (y >= p.y)
			return true;
		else
			return false;
	}
}
bool pair::operator<=(const pair& p) const {
	if (x < p.x)
	{
		return true;
	}
	else if (x > p.x)
	{
		return false;
	}
	else
	{
		if (y <= p.y)
			return true;
		else
			return false;
	}
}
bool pair::operator==(const pair& p) const {
	if (x == p.x && y == p.y)
	{
		return true;
	}
	else return false;
	
}
void pair::print() {
	printf("%d %d\n", x, y);
}
void pair::get(int X,int Y) {
	x = X; y = Y;
}
pair::pair() {
}
int main() {
	int len,x,y;
	scanf("%d", &len);
	pair* vec = new pair[len];
	for (int i = 0; i < len; i++) {
		scanf("%d %d", &x, &y);
		vec[i].get(x, y);
	}
	std::sort(vec, vec + len);
	pair* tail = std::unique(vec, vec + len);
	for (int i = 0; i < tail - vec; i++) {
		vec[i].print();
	}
	
}
