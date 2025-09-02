#include <iostream>

using namespace std;

int main(){
int a;
    cout << "Zadejte velikost obrazce: ";
    cin >> a;
/*ètverec*/
    for(int ctverec=1;ctverec<=a;ctverec++) {
            cout << "\n";
            for(int y=0;y!=a;y++) {
            cout <<"* ";
        }
    }


    cout << "\n\n";

        for(int i=0;i<=a;i++){
            for(int b=0;b<i;b++) {
                cout << "* ";
            }
           cout << "\n";
        }
        cout << "\n\n";

        for(int i=0;i<=a;i++) {
            for(int c=a;c>i;c--){
                cout << "* ";
            }
            cout << "\n";

        }
        cout << "\n\n";

/*Trojúhelník*/
     for(int i=0;i<=a;i++) {
            for(int d=a;d>i;d--) {
                cout << " ";

            }
           for(int b=0;b<i;b++) {
                cout << "* ";
            }


        cout << "\n";
     }

     cout << "\n\n";



return 0;
}
