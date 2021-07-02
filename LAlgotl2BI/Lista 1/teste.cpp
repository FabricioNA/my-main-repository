  #include<iostream>
  using std::cout;
  using std::endl;
  using std::cin;

  #include<string>
  using std::string;
  using std::getline;

  int main(){
    string myText;

    cout << "Digite um texto qualquer" << endl;
    getline( cin, myText );
    myText.erase(7, 3);

    cout << myText << endl;

    return 0;
  }