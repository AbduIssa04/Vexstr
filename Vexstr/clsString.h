#pragma once
#include <iostream>
#include <vector>
using namespace std;

class clsString
{
private:
    string _Value;

public:

    clsString()
    {
        _Value = "";
    }

    clsString(string Value)
    {
        _Value = Value;
    }

    void SetValue(string Value) {
        _Value = Value;
    }

    string GetValue() {
        return _Value;
    }

    __declspec(property(get = GetValue, put = SetValue)) string Value;


    static short Length(string S1)
    {
        return S1.length();
    };

    short Length()
    {
        return _Value.length();
    };

};

