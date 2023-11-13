//C++ program for Shift Cipher
#include <iostream>
using namespace std;

string encrypt(string input, int key)
{
    key=key%26;

    string output = "";

	for (int i = 0; i < input.length(); i++) 
    {
	if (isupper(input[i]))
        //encrypting uppercase letters.
		output += char(int(input[i] + key - 65) % 26 + 65);
		else
        //encrypting lowercase letters.
			output += char(int(input[i] + key - 97) % 26 + 97);
     }
	return output;
}


string decrypt(string ct, int key)
{
	string pt="";	
	for(int i=0;i< ct.size(); i++)
	{
		if(isupper(ct[i]))
		{
			pt+= char((int(ct[i]- key- 65)%26+26)%26 + 65);
		}
		else{
			pt+=  char((int(ct[i]- key- 97)%26+ 26)%26 + 97);
		}
	}
	return pt;
}

int main()
{
	string input;
	int key;
    cout<<"Enter the plaintext to be encrypted\n";
    cin>>input;

    cout<<"Enter the size of key\n";
    cin>>key;

	string ct= encrypt(input, key);

	cout <<"Ciphertext: " << ct<<endl;

	cout<<"Decrypting the string\n";

	input=decrypt(ct,key);
	
	cout<<"The original plaintext was: "<< input <<endl;

	return 0;
}
