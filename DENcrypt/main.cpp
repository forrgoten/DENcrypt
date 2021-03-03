#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstring>
 
using namespace std;
 
void encruptor();
 
void decryptor();

 
int main()
{
    int choose;
    cout << "1 - Encrypt\t2 - Decrypt\t0 - Exit\n" << "What do you like to do? ->   ";
    cin >> choose;
    switch(choose){
        case 1:
            encruptor();
            break;
        case 2:
            decryptor();
            break;
        case 0:
            exit(0);
            break;
        default:
            exit(42);
            break;
    }
    exit(42);
    return 0;
}
 
void encruptor(){
    
    string resstr = "";
    
    string text = "";
    
    string key = "";
    
    cout << "Enter text to encrypt" << endl;
    
    cin >> text;
    
    cout << "Enter key" << endl;
    
    cin >> key;
    
    
    const unsigned int lengthofkey = (int) key.length();
    
    const unsigned int lengthoftext = (int) text.length();
    
    int ASCIIsymtext[lengthoftext]; 
    
    int ASCIIsymkey[lengthofkey];
    
    
    for (int i = 0; i < lengthofkey; i++)//key ASCII convertation
    {
        ASCIIsymkey[i] = key[i];
    }
    
    
    for (int i = 0; i < lengthoftext; i++)//text ASCII convertation
    {
        ASCIIsymtext[i] = text[i];
    }
    
    
    cout << "ASCII convertation completed" << endl; //end message
    
    
     int result[lengthoftext];
    
     int iterforkey = 0;
    
    
    for(int j=0; j<lengthoftext; ++j)//encrypting text
    {
    if(iterforkey >= lengthofkey)
        iterforkey = 0;
    int item = ASCIIsymkey[iterforkey] + ASCIIsymtext[j];
    
    if(item>127)
        item -= 127;
    
    result[j] = item;
    iterforkey++;
    }
    
    for(int i = 0; i < text.length(); i++)//to string convertation
    {
        int input = result[i];
        char output = static_cast<char>(input); 
        resstr += output;
    }
    
    
    cout << "Encoding completed" << endl;//end message
    
    cout << "Your result is: " + resstr + "\n";//show result
    
}
 
void decryptor(){
    
    string resstr = "";
    
    string text = "";
    
    string key = "";
    
    cout << "Enter text to decrypt" << endl;
    
    cin >> text;
    
    cout << "Enter key" << endl;
    
    cin >> key;
    
    
    const unsigned int lengthofkey = (int) key.length();
    
    const unsigned int lengthoftext = (int) text.length();
    
    int ASCIIsymtext[lengthoftext]; 
    
    int ASCIIsymkey[lengthofkey];
    
    
    for (int i = 0; i < lengthofkey; i++)//key ASCII convertation
    {
        ASCIIsymkey[i] = key[i];
    }
    
    
    for (int i = 0; i < lengthoftext; i++)//text ASCII convertation
    {
        ASCIIsymtext[i] = text[i];
    }
    
    
    cout << "ASCII convertation completed" << endl; //end message
    
    
    int result[lengthoftext];
    
    int iterforkey = 0;
    
    for(int j=0; j < lengthoftext; ++j)//decrypting text
    {
    if(iterforkey >= lengthofkey)
        iterforkey = 0;
     
     int item = ASCIIsymtext[j] - ASCIIsymkey[iterforkey] + 127;
 
    result[j] = item;
    iterforkey++;
    }
    
    for(int i = 0; i < text.length(); i++)//to string convertation
    {
        int input = result[i];
        char output = static_cast<char>(input); 
        resstr += output;
    }
    
    
    cout << "Decoding completed" << endl;//end message
    
    cout << "Your result is:" + resstr + "\n";//show result
}

















