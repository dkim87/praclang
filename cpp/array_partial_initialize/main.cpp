#include <iostream>
using namespace std;

int main()
{
	const char *atoz[27] = { "ant","book","candy","dog","egg","fish","grapes","house"
	,"ice cream","jar","key","lion","mouse","net","ocean","pig","queen","rainbow"
	,"sun","turtle","umbrella","vegetables","worm","x-ray","yarn","zebra" };

    for (auto s : atoz){
        cout << s << endl;
    }

    /*
	char albet;
	char num;
	cout << "알파벳을 입력하세요." << endl;
	cin >> albet;
	for (num = 0; num < 27; num++)
	{
		if (**(atoz + num) == albet) break;
	}
	cout << "글자에 해당하는 단어는 " << atoz[num] << "입니다." << endl;
    */

	return 0;
}
