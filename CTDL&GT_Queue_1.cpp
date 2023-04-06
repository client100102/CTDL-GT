//nguon: topdev.vn, vntalking.com, tailieu.pro
#include <iostream>
#define MAX 9

using namespace std;

class Queue {
    private:
        int arr[MAX];
        int dau;
        int cuoi;
    public:
        Queue() {
            dau = -1;
            cuoi = -1;
        }
        bool isEmpty() {
            if (dau == -1 && cuoi == -1)
                return true;
            else
                return false;
        }
        bool isFull() {
            if (cuoi == MAX-1)
                return true;
            else
                return false;
        }
        void enqueue(int x) {
            if (isFull()) {
                cout << "Error: Hang doi dang full\n";
                return;
            }
            if (isEmpty()) {
                dau = 0;
                cuoi = 0;
            } else {
                cuoi++;
            }
            arr[cuoi] = x;
        }
        void dequeue() {
            if (isEmpty()) {
                cout << "Error: Hang doi dang rong\n";
                return;
            } else if (dau == cuoi) {
                dau = -1;
                cuoi = -1;
            } else {
                dau++;
            }
        }
        int getFront() {
            if (isEmpty()) {
                cout << "Error: Hang doi dang rong\n";
                return -1;
            }
            return arr[dau];
        }
};
int main() {
    Queue q;

    q.enqueue(69);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(69);
    q.enqueue(49);
    q.enqueue(463);
    q.enqueue(6869);
    q.enqueue(89);
    //neu khong co gi phia tren thi chuong trinh bao rong

    cout << q.getFront() << endl;

    q.dequeue();
    cout << q.getFront() << endl;

    q.dequeue();
    cout << q.getFront() << endl;

    q.dequeue();
    cout << q.getFront() << endl;

    q.dequeue();
    cout << q.getFront() << endl;
    return 0;
}
