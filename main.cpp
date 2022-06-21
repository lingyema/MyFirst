#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
int main() {
	//将大写字符转成小写，小写字符转成大写
	char x;
	cin >> x;
	if (x>='a' && x<='z')
	{
		//小写,先算差值，在转大写
		x = x - 'a' + 'A';
	}
	else if (x>='A' && x<='Z')
	{
		x = x - 'A' + 'a';
	}
	cout << x << endl;

	/*string word;
	int len = 0;
	int nums = 0;
	while (true)
	{
		
		if(getline(cin, word).eof()){
			break;
		}
		len++;
		nums += word.size();
	}
	cout << len << endl;
	cout << nums << endl;*/

	/*int arr[3] = {1};
	for (size_t i = 0; i < 3; i++)
	{
		cout << arr[i] << "  ";
	}*/
	//int r;
	//double len;
	//double area;
	//cout << "请输入圆的半径：";
	//cin >> r;
	//len = 2 * 3.14 * r;
	//area = 3.14 * r * r;
	////只输出小数点后两位
	//cout.precision(2);
	//cout.flags(cout.fixed);
	//cout << "圆的半径是：" << r << endl;
	//cout << "圆的周长是：" << len << endl;
	//cout << "圆的面积是：" << area << endl;
	system("pause");

	return 0;
}