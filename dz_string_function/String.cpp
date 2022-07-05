#include "String.h"


void String::delComment(string& text)
{
    int n = 0, m = 0, p = 0;
    while (n != string::npos)
    {
        n = text.find("//");
        if (n != string::npos)
            text.erase(n, 2);
    }
    while (m != string::npos)
    {
        m = text.find("/*");
        if (m != string::npos)
            text.erase(m, 2);
    }
    while (p != string::npos)
    {
        p = text.find("*/");
        if (p != string::npos)
            text.erase(p, 2);
    }
}
void String::delComment()
{
    int n = 0, m = 0, p = 0;
    while (n != string::npos)
    {
        n = _obj.find("//");
        if (n != string::npos)
            _obj.erase(n, 2);
    }
    while (m != string::npos)
    {
        m = _obj.find("/*");
        if (m != string::npos)
            _obj.erase(m, 2);
    }
    while (p != string::npos)
    {
        p = _obj.find("*/");
        if (p != string::npos)
            _obj.erase(p, 2);
    }
}
string String::replase(string str1, string &str2) {
    int n = 0;
    string repl;
    int m = str2.size();
    repl = str2;
    repl.insert(m, ")");
    repl.insert(0, "(");
    while (n != string::npos)
    {
        n=str1.find(str2,n);
        if (n != string::npos)
        {
            str1.replace(n, m, repl);
            n += 2;
        }
    }
    return str1;
}
string String::replase(string& str2) {
    string str1 = _obj;
    int n = 0;
    string repl;
    int m = str2.size();
    repl = str2;
    repl.insert(m, ")");
    repl.insert(0, "(");
    while (n != string::npos)
    {
        n = str1.find(str2, n);
        if (n != string::npos)
        {
            str1.replace(n, m, repl);
            n += 2;
        }
    }
    return str1;
}