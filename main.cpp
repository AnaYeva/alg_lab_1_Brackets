#include <iostream>
#include "Windows.h"
using namespace std;
void validBrackets(const string& str){
    int circleOpen =0;
    int circleClose =0;
    int figureOpen =0;
    int figureClose =0;
    int squareOpen =0;
    int squareClose =0;
    for(char i : str){
        switch(i){
            case '(':
                circleOpen++;
                break;
            case ')':
                circleClose++;
                break;
            case '{':
                figureOpen++;
                break;
            case '}':
                figureClose++;
                break;
            case '[':
                squareOpen++;
                break;
            case ']':
                squareClose++;
                break;
            default:
                cout<<"Строка содержит посторонние символы";
                return;
        }
        if (circleClose > circleOpen or figureClose > figureOpen or squareClose > squareOpen){
            cout<<"Строка некорректна";
            return;
        }
    }
    if(circleOpen==circleClose and figureOpen == figureClose and squareOpen == squareClose)cout << "Строка корректна";
    else cout<<"Строка некорректна";
}
int main() {
    SetConsoleOutputCP(65001);
    cout << "Введите строку:" ;
    string line;
    cin>>line;
    validBrackets(line);
    return 0;
}
