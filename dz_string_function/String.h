#pragma once
#include <iostream>
#include<string>

using namespace std;
class String
{
	string _obj;
    
public:
    
    void delComment(string& text);
    void delComment();

    void Print()
    {
        cout << _obj << endl;
    }

    void setStr()
    {
        getline(cin, _obj);
    }
    string replase(string str1, string &str2);
    string replase(string &str2);
};

