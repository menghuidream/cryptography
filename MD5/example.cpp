#include "MD5.h"
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string plain="010100100010101000101010001110";
	string enpt;
	
    MD5 md5=MD5();
	
	enpt=md5.hash(plain,"0x","0x");
	cout<<"hash result: "<<enpt<<endl;
}