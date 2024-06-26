// ok.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//#include <iostream>
//using namespace std;
//
//void bubbleSort(int arr[], int n)
//{
//    int tmp;
//    for (int i = 0; i < n - 1; i++)
//    {
//        for (int j = 0; j < n - i - 1;j++)
//        {
//            if (arr[j] > arr[j + 1]) {
//                tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//}
//void show(int arr[], int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        cout << arr[i] << " ";
//    }
//}
//int main()
//{
//    int n = 7;
//    int arr[] = { 4 ,2 ,1, 6  , 50 , 23 , 87 };
//    bubbleSort(arr, n);
//    show(arr, n);
//            
//}
#include <iostream>
#include <vector>
using namespace std;

template <typename T>

class Stack
{
    struct Node {
        T value;
        shared_ptr <Node> next;
        Node(T value) : value(value), next(nullptr) {}
    };
    shared_ptr <Node> s;
public:
    Stack() : s(nullptr) {}

    void push(T val)
    {
        shared_ptr <Node> newNode = make_shared<Node>(val);
        if (this->s == nullptr)
        {
            this->s = newNode;
        }
        else
        {
            shared_ptr <Node> cur = this->s;
            while (cur->next != nullptr)
            {
                cur = cur->next;

            }
            cur->next = newNode;
        }
    }
    void pop()
    {
        int val = s->value;
        s = s->next;


    }
    void shows()
    {
        shared_ptr <Node> cur = this->s;
        while (cur != nullptr)
        {
            cout << cur->value << " ";
            cur = cur->next;
        }
        cout << endl;
    }

};
template <typename T>
class queue {
    struct Node
    {
        T value;
        shared_ptr <Node> next;
        Node(T value) : value(value), next(nullptr) {}
    };
	shared_ptr <Node> front;
	shared_ptr <Node> back;
public:
    void end(T value) {
        shared_ptr <Node> newNode = make_shared <Node>(value);
        if (this->front == nullptr)
        {
            front = newNode;
            back = newNode;
        }
        else
        {
            back->next = newNode;
            back = newNode;
        }
    }
    int que()
    {
        int val = front->value;
        front = front->next;
        if (front == nullptr)
        {
            back = nullptr;
        }
        return val;

    }
    void show()
    {
        shared_ptr <Node> tmp = front;
        while (tmp != nullptr)
        {
            cout << tmp->value << " ";
            tmp = tmp->next;
        }
        cout << endl;
    }
    
};
template <typename T>
class LinkedList
{
    struct Node
    {
        T val;
        shared_ptr <Node> next;
        Node(T val) : val(val), next(nullptr) {}
    };
    shared_ptr <Node> head;

public:
    LinkedList() : head(nullptr) {}
    void add(T val)
    {
        shared_ptr <Node> newNode = make_shared <Node>(val);
        if (this->head == nullptr)
        {
            this->head = newNode;
        }
        else
        {
            shared_ptr <Node> cur = this->head;
            while (cur->next != nullptr)
            {
                cur = cur->next;

            }
            cur->next = newNode;
        }
    }
    void remove(T val)
    {
        shared_ptr <Node> cur = this->head;
        shared_ptr <Node> prev = nullptr;
        while (cur != nullptr && cur->val != val)
        {
            prev = cur;
            cur = cur->next;
        }
        if (cur == nullptr)
        {
            return;
        }
        else if (prev == nullptr)
        {
            this->head = this->head->next;
        }
        prev->next = cur->next;

    }
    void show()
    {
        shared_ptr <Node> current = this->head;
        while (current != nullptr)
        {
            cout << current->val << " ";
            current = current->next;
        }
        cout << endl;

    }

};
int main()
{
    LinkedList <int> ll;
    ll.add(111);
    ll.add(20);
    ll.add(1);
    ll.add(0);
    ll.show();
    ll.remove(1);
    ll.show();
    cout << endl;
    Stack <int> ss;
    ss.push(1);
    ss.push(2);
    ss.push(3);
    ss.push(6);
    ss.shows();
    ss.pop();
    ss.shows();
    queue <int> q;
    q.end(1);
    q.end(2);
    q.end(3);
    q.end(4);
    q.show();
    q.que();
    q.show();
}


