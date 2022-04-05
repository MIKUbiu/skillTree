#include<iostream>
using namespace std;
int main() {
	int a; cin >> a;
	int cnt=0;//统计1的个数
	//通过a右移一位后与1相与得到最后一位的值
	//因为二进制数只有0和1，与1运算后只有对应也只有0和1的值
	//也可以通过如0100 与 0001 与运算后结果为0000
	for (int i = 0; i < 32; i++) {
		if (a >> i & 1)cnt++;//每次右移i位，右移后的最后一位数进行运算
	}
	cout << cnt << endl;
	return 0;
}
