#pragma warning(disable:4996)

#include <cstring>
#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;

int map[211][211]={0};
int dx[] = { 1,1,-1,-1,2,2,-2,-2 };
int dy[] = { 2,-2,2,-2,1,-1,1,-1 };//Χ�������ߵİ˸����� 

struct Node {
	int x;
	int y;
	int step;
};//��ÿ�����λ�úʹﵽ���ò��������Node���ͣ��ṹ�壩 


int main() {
	int x_final, y_final;
	scanf("%d %d", &x_final, &y_final);
	x_final = x_final + 105;
	y_final = y_final + 105;
	if (x_final == 105 && y_final == 105) {
		printf("%d", 0);
		return 0;
	}//����ԭ�㣬ֱ�����0��

	int n;
	int hole_x, hole_y;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &hole_x, &hole_y);
		map[hole_x+105][hole_y+105] = -1;
	}//�����ݵ���Ϊ-1

	queue<Node> Q;
	Q.push(Node{ 105, 105, 0 });//��ԭ��ѹ�����
	int xs=105, ys=105;


	while (!Q.empty()) {//�����������
		for (int j = 0; j < 8; j++) {
			xs = Q.front().x + dx[j];
			ys = Q.front().y + dy[j];
			if (xs >= 0 && xs <= 210 && ys >= 0 && ys <= 210) {//�����̷�Χ��
				if (map[xs][ys] == 0) {//δ���ѵ������Ҳ��ǰ��ݵ�
					map[xs][ys] = Q.front().step + 1;
					Q.push(Node{ xs,ys,map[xs][ys] });
				}

			}
			if (xs == x_final && ys == y_final) {//�Ѿ��ѵ��յ�
				break;
			}
		}
		if (xs == x_final && ys == y_final) {//�Ѿ��ѵ��յ�
			break;
		}
		Q.pop();
	}
	if (map[x_final][y_final] == 0) {
		printf("fail");
		return 0;
	}
	printf("%d", map[x_final][y_final]);
	
	return 0;

}