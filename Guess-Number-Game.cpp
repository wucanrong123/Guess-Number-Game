#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int L, R, cnt, guess_num;
void print(string str) {
	for (int i = 0; i < str.size(); i++) {
		putchar(str[i]);
		Sleep(20);
	}
}
int Rand(int l, int r) {
	return rand() % (r - l + 1) + l;
} 
int main() {
	srand(time(0));
	print("猜数游戏1.0\n");
	print("请输入左区间L和右区间R\n");
	scanf("%d%d", &L, &R);
	while (L > R) {
		print("输入错误，请重新输入\n");
		scanf("%d%d", &L, &R);
	}
	int num = Rand(L, R);
	cout << num << endl;
	while (true) {
		print("第");
		printf("%d", ++cnt);
		Sleep(20);
		print("次：");
		scanf("%d", &guess_num);
		if (guess_num > R || guess_num < L) {
			print("输入错误，请重新输入\n");
			print("第");
		    printf("%d", cnt);
		    Sleep(20);
		    print("次：");
			scanf("%d", &guess_num);
		}else {
			if (guess_num == num) {
				print("恭喜你，猜对了！\n");
				break;
			}else if (guess_num > num) {
				print("恭喜你，");
				Sleep(3000); 
				print("差了亿点点！\n");
				print("比"); 
				printf("%d", guess_num);
				print("小\n"); 
				R = guess_num;
			}else if (guess_num < num) {
				print("恭喜你，");
				Sleep(3000); 
				print("差了亿点点！\n");
				print("比");
				printf("%d", guess_num);
				print("大\n"); 
				L = guess_num;
			}
		} 
	}
	system("pause");
	return 0;
} 
