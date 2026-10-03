#include <iostream>
using namespace std;

class Node {
    int data;
    Node* next;

public:
    Node(int val) {
        data = val;
        next = NULL;
    }
    friend class List;  // 

    ~Node() {
       
        if(next != NULL) {
            //  cout<<"Node" << data <<endl;
            delete next;
            next = NULL;
        }
    }

};

class List {
    Node* head;
    Node* tail;

public:
    List() {
        head = NULL;
        tail = NULL; 
    }


    // 
    

        ~List() {
            // cout<<"  ~List\n";
        if(head != NULL )   
        delete head;
        head = NULL;

  }


    void push_front(int val) {
        Node* newNode = new Node(val); // dynamic
        if(head == NULL) {
            head = tail = newNode;
        }else {
            newNode->next = head;
             head = newNode;  
        }


    }

    void push_back(int val) {
        Node*newNode= new Node(val);
        if(head == NULL) {
            head = tail = newNode;
        } else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printList() {
    Node* temp = head;

    while (temp != NULL) {
        cout<< temp->data <<"-->";
        temp = temp->next;

    }
    cout<< " NULL\n";

    }

    void insert(int val, int pos) {
        Node* newNode = new Node(val);

        Node* temp = head;

        for(int i=0; i<pos-1; i++) {

            if (temp == NULL)
            {
                cout<<"position is invailid \n";
            }
            
            temp = temp->next;
        }

        // temp is now at pos-1 i.e. prev/ left
        newNode->next = temp->next;
        temp->next = newNode;
    } 

    void pop_front() {
        if(head == NULL) {
            cout<<"LL is empty"<<endl;
            return;

        }

        Node* temp = head;
        head = head->next;

        temp->next = NULL;
        delete temp;
    }

int searchItr(int key) {
    Node* temp = head;
    int idx=0;

    while(temp != NULL) {
        if(temp->data == key) {
            return idx;
        }
        temp = temp->next;
        idx++;
    }
    return -1;
}



};

int main() {
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.printList();

    // ll.pop_front();
    // ll.printList();

    cout<<ll.searchItr(5);


    // ll.push_back(5);
    // ll.push_back(6);

    // ll.printList();

    // ll.insert(100, 2);
    // ll.printList();
    
    
    

    return 0;
}