#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
int main() {
	//����д�ַ�ת��Сд��Сд�ַ�ת�ɴ�д
	char x;
	cin >> x;
	if (x>='a' && x<='z')
	{
		//Сд,�����ֵ����ת��д
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
	//cout << "������Բ�İ뾶��";
	//cin >> r;
	//len = 2 * 3.14 * r;
	//area = 3.14 * r * r;
	////ֻ���С�������λ
	//cout.precision(2);
	//cout.flags(cout.fixed);
	//cout << "Բ�İ뾶�ǣ�" << r << endl;
	//cout << "Բ���ܳ��ǣ�" << len << endl;
	//cout << "Բ������ǣ�" << area << endl;
	system("pause");

	return 0;
}