#include <iostream>
using namespace std;

class queues {
    private :
     static const int max =3;
     int front, rear;
     int queue_array [max];
     
    public :
        queues() {
            front = -1;
            rear = -1;
        }
        
        void insert() {
            int num;
            cout << "enter a number :";
            cin >> num;
            cout << endl;

            //cek apakah antrian penuh
            if ((front == 0 && rear == max -1) || (front == rear +1)) {
                cout << "\n Queue overflow";
                return ;
            }
        }

     }
