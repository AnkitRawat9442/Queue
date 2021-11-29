
// _________________________   A N K I T   R A W A T __________________________________//

//___________________________________ queues _________________________________________//

/***
         Queues can be implemented using array : ->   by one pointer
                                               : ->   by two pointer ( front and rare)
        drawback of queue using one pointer by array is deleting a element from queue will take O(n) time 
          because front pointer is not present so after deleting  1st element, rest all element must move one step
             ahead to void blank array element.
        

 ****/

#include <iostream>
using namespace std;

class queue
{
    int size, front, rare;
    int *Q;
  public:
    queue(int n)
    {
        size = n;
        Q = new int[size];
        front = rare = -1;
    }

    void enqueue() // time -> O(1)
    {
        int val;
        if ( front != size-1 && rare != (size - 1))
        {
            if(front == -1)
             front = 0;
            cout << "data : ";
            cin >> val;
            Q[++rare] = val;
        }
        else
          cout<<"Cannot push\n";
    }
    void dequeue() // time -> O(1)
    {
        if (front <= size-1 && front <= rare)
           front++;
        else 
           cout<<"Cannot pop\n";
    }
    void show()
    {
        if( front != -1 && front <= size-1){
        int i = front ;
        cout<<"Queue : ";
        while (i <= rare)
        {
            cout << Q[i++] << " ";
        }
        cout << endl;
        }
        else
          cout<<"Queue is empty \n";
    }
};
int main()
{   cout << "\nAnkit Rawat_____20011670 _____ Section G\n";
    int n, choice;
    cout << "Enter the size of the Queue  : ";
    cin >> n;
    cout << "Press 1 for push\nPress 2 for pop\nPress 3 for display\nPress 0 to Quit\n";
    cout << "Enter the choice  : ";
    cin >> choice;
    queue q(n);
    while (choice)
    {
        switch (choice)
        {
        case 1:
            q.enqueue();
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.show();
            break;
        case 0:
            return 0;
        }
        cout << "Enter the choice  : ";
        cin >> choice;
    }
    return 0;
}

//      drawback of using queue with array is its space can not be reused
/***
          _  _  _  _  _  _  _
      f,r

          1  2  3  4  5  6  7 
       f                    r
       delete all element 
          _  _  _  _  _  _  _
                            f,r     ( f == r ) -> queue is empty no more element can be added to queue
    
    but the space are free they can be used  to add new element.
    this problem was solved by 
    1->  resetting the pointer  : if anytime (f == r ) , bring the f and r again to initial position 
            _  _  _  _  _  _  _
                            f,r 
          here (f==r ) , so reintialise f anf r to -1 so the sapce can be reused.
            _  _  _  _  _  _  _
        f,r                     

    2 -> using circular queue : 
        suppose queue became empty 
                   _  _  _  _  _  _  _
                                    f,r 
        and we want to add more element, we can add at begining 

                   _  _  _  _  _  _  _
                   r                 f         bring rare to begining

 ***/

// #include <iostream>
// using namespace std;
// class queue
// {   int size, front, rare;
//     int *Q;
// public:
//     queue(int n)
//     {
//         size = n;
//         Q = new int[size];
//         front = rare = -1;
//     }
//     void enqueue()
//     {
//         int val;
//         if (!((rare + 1) % size == front % size))
//         {
//              cout << "data : ";
//             cin >> val;
//             if (front == -1)
//                 front = 0;
//             rare = (rare + 1) % size;
//                Q[rare] = val;
//         }
//         else
//         cout << "Queue is full \n";
//     }
//     int dequeue()
//     {
//         int x = -1;
//         if (rare == front)
//         {
//             front = -1;
//             rare = -1;
//         }
//         if (rare != front)
//         {
//             front = (front + 1) % size;
//             x = Q[front];
//         }
//         else
//         {
//             front = rare = -1;
//         }
//         return x;
//     }
//     void show()
//     {
//         if (front != -1)
//         {
//             int i = front;
//             cout << "Queues : ";
//             do
//             {
//                 cout << Q[i] << " ";
//                 i = (i + 1) % size;
//             } while (i != (rare + 1) % size);
//             cout << endl;
//         }
//         else
//             cout << "Queue is empty \n";
//     }
// };
// int main()
// {   cout<<"\nAnkit Rawat_____20011670 _____ Section G\n";
//     int n , choice;
//      cout << "Enter the size of the Queue  : ";
//      cin >> n ;
//     cout << "Press 1 for push\nPress 2 for pop\nPress 3 for display\nPress 0 to Quit\n";
//     cout << "Enter the choice  : ";
//     cin >> choice;
//     queue q(n);
//     while (choice)
//     {
//         switch (choice)
//         {
//         case 1:
//             q.enqueue();
//             break;
//         case 2:
//             q.dequeue();
//             break;
//         case 3:
//             q.show();
//             break;
//         case 0:
//             return 0;
//         }
//         cout << "Enter the choice  : ";
//         cin >> choice;
//     }
//     return 0;
// }
