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
	print("������Ϸ1.0\n");
	print("������������L��������R\n");
	scanf("%d%d", &L, &R);
	while (L > R) {
		print("�����������������\n");
		scanf("%d%d", &L, &R);
	}
	int num = Rand(L, R);
	cout << num << endl;
	while (true) {
		print("��");
		printf("%d", ++cnt);
		Sleep(20);
		print("�Σ�");
		scanf("%d", &guess_num);
		if (guess_num > R || guess_num < L) {
			print("�����������������\n");
			print("��");
		    printf("%d", cnt);
		    Sleep(20);
		    print("�Σ�");
			scanf("%d", &guess_num);
		}else {
			if (guess_num == num) {
				print("��ϲ�㣬�¶��ˣ�\n");
				break;
			}else if (guess_num > num) {
				print("��ϲ�㣬");
				Sleep(3000); 
				print("�����ڵ�㣡\n");
				print("��"); 
				printf("%d", guess_num);
				print("С\n"); 
				R = guess_num;
			}else if (guess_num < num) {
				print("��ϲ�㣬");
				Sleep(3000); 
				print("�����ڵ�㣡\n");
				print("��");
				printf("%d", guess_num);
				print("��\n"); 
				L = guess_num;
			}
		} 
	}
	system("pause");
	return 0;
} 
