//
//  main.cpp
//  cw5
//
//  Created by Умитхан Туржанов on 08.12.2021.
//

#include <iostream>
using namespace std;
// фунция 1 отдела с проверкой пароля
int Back_end(string password){
    string codeword_1 = "1";
    cout << "Введите кодовое слово:  ";
    cin >> password;
    if (password == codeword_1){
        cout << "WELCOME!!!"<< "\n";
    }
    else {
        cout << "Go away"<< "\n";
    }
    return 0;
}
// фунция 2 отдела с проверкой пароля
int Fron_end(string password){
    string codeword_1 = "2";
    cout << "Введите кодовое слово:  ";
    cin >> password;
    if (password == codeword_1){
        cout << "WELCOME!!!"<< "\n";
    }
    else {
        cout << "Go away"<< "\n";
    }
    return 0;
}
// фунция 3 отдела с проверкой пароля
int Mobile(string password){
    string codeword_1 = "3";
    cout << "Введите кодовое слово:  " ;
    cin >> password;
    if (password == codeword_1){
        cout << "WELCOME!!!"<< "\n";
    }
    else {
        cout << "Go away"<< "\n";
    }
    return 0;
}
// фунция 4 отдела с проверкой пароля
int HR(string password){
    string codeword_1 = "4";
    cout << "Введите кодовое слово: ";
    cin >> password;
    if (password == codeword_1){
        cout << "WELCOME!!!"<< "\n";
    }
    else {
        cout << "Go away"<< "\n";
    }
    return 0;
}
// проверка варианта который выбрал пользователь с вызовом нужной функции
int Answer(char answer) {
    string password;
    cout << "1) Back_end" << "\n"<<"2) Front_end" << "\n"<<"3) MobileDev" << "\n"<<"4) HR" << "\n"<< " "<< "\n";
    cout << "Ответ: ";
    cin >> answer;
    if (answer == '1'){
        cout << "Отдел Back_end"<<"\n";
        Back_end(password);
    }
        else if (answer == '2'){
            cout << "Отдел Front_end " << "\n";
            Fron_end(password);
        }
        else if (answer == '3'){
            cout << "Отдел MobileDev " << "\n";
            Mobile(password);
        }
        else if (answer == '4'){
            cout << "Отдел HR " << "\n";
            HR(password);
        }
        else {
            cout << "Данного варианта нет" << "\n";
        }
    return  0;
}
int main(int argc, const char * argv[]) {
    
    char answer;
    //string codeword;
    cout << "Здравствуйте! Для продолжнения, выберите подразделение к которму вы относитесь: " << "\n";
    //getline(cin, answer);
    Answer(answer);
   
    
    
  
}
