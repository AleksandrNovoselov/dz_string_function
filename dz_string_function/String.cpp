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