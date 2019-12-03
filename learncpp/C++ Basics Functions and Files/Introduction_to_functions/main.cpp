#include <QCoreApplication>
#include <QtDebug>
#include <iostream>
#include <QString>
using namespace std;


void doPrint()
{
    cout<< "Test print";
}

int factorial(int i){
    return i!=0?i*factorial(i-1):1;

}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int i;
    cin>>i;
    //    doPrint();
    cout<< to_string(i)+"! = "<<factorial(i)<<endl;

    //return a.exec();
    // For exit with Enter Key
    return 0;
}
