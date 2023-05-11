#include<iostream>
#include<string>


template <typename T>
class Array
{
    public:

    T array[10];

    void fill(T value)
    {
        for (int i = 0;i< 10;i++)
        array[i] = value;
    }

    T& at(int index)
    {
        return array[index];
    }
};

template <typename T>
class Stack
{
    public:
    Stack(int size)
    {
        stackArray = new T[size];
        capacity = size;
        top = -1;
    }
     
    void push(T element) 
    {
        if (top == capacity - 1) 
        {
            std::cout << "Stack overflow" << std::endl;
        }
        else 
        {
            top++;
            stackArray[top] = element;
        }
    }

     T pop() {
        if (top == -1) {
            std::cout << "Stack underflow" << std::endl;
            return T();
        }
        else {
            T element = stackArray[top];
            top--;
            return element;
        }
    }

    ~Stack()
    {
        delete[] stackArray; 
    }

    bool isEmpty() 
    {
        return top == -1;
    }


    bool isFull() 
    {
        return top == capacity - 1;
    }


    private:
    T* stackArray ;
    int top;
    int capacity;


};


template<class T1 ,class T2>
struct pair 
{

pair(T1 first, T2 second):mFirst(first),mSecond(second)
{

}

T1 mFirst;
T2 mSecond;

};

template<class T1 ,class T2>
pair<T1,T2> make_pair(T1 first, T2 second)
{
    pair<T1,T2> temp(first,second);

    return temp;
}


template<typename T>
class Queue

{
 public:
 Queue(int size)
 {
  queue = new T[size];
  capacity = size ;
  rear = -1;
  front = -1;
 }

void enqueue(T element) {
        if (isFull()) {
            std::cout << "Queue overflow" << std::endl;
        }
        else {
            if (isEmpty()) {
                front = 0;
            }
            rear++;
            queue[rear] = element;
        }
    }

 T dequeue() {
        if (isEmpty()) {
            std::cout << "Queue underflow" << std::endl;
            return T();
        }
        else {
            T element = queue[front];
            if (front == rear) {
                front = -1;
                rear = -1;
            }
            else {
                front++;
            }
            return element;
        }
    }

T peek() {
        if (isEmpty()) {
           std::cout << "Queue is empty" << std::endl;
            return T();
        }
        else {
            return queue[front];
        }
    }


int size(T* queue)
{
    int elementsnum = 0;
    size_t i = 0;
 
    while(queue[i] != NULL)
    {
        elementsnum ++;
        i++;
    }

    return elementsnum;
}

bool isEmpty()
{
    return front == -1 && rear ==-1;
}

bool isFull() {
        return rear == capacity - 1;
    }
~Queue() {
        delete[] queue;
    }
 private:
 T* queue;
 int capacity;
 int front ;
 int rear ;

};


int main(void)
{
    Array<int> intArr;
    intArr.fill(2);
    std::cout << "intArray[4]: " << intArr.at(4) << std::endl;

    Array<std::string> strArr;
    strArr.fill("abc");
    strArr.at(6) = "123";

    for (int i =0;i<10;i++)
    std::cout << "strArr["<< i <<"]: " << strArr.at(i) << std::endl;  

    Stack<int> intStack(5);  // creating a stack of integers
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    std::cout << intStack.pop() << std::endl;  // should print 30
    std::cout << intStack.pop() << std::endl;  // should print 20
    std::cout << intStack.pop() << std::endl;  // should print 10

    Stack<double> doubleStack(5);  // creating a stack of doubles
    doubleStack.push((double)10);
    doubleStack.push((double) 30.9);

    std::cout << doubleStack.pop() << std::endl; // should print 30.9
    std::cout << doubleStack.pop() << std::endl; // should print 20.7
    std::cout << doubleStack.pop() << std::endl; // should print 10.5



    pair<int,std::string> values = make_pair<int,std::string>(1,"Ahmed");
    std::cout << "First " << values.mFirst << "   Second " << values.mSecond;





    Queue<int> intQueue(5);  // creating a queue of integers
    intQueue.enqueue(10);
    intQueue.enqueue(20);
    intQueue.enqueue(30);
    std::cout << intQueue.dequeue() << std::endl;  // should print 10
    std::cout << intQueue.dequeue() << std::endl;  // should print 20
    std::cout << intQueue.dequeue() << std::endl;  // should print 30

    Queue<double> dQueue(5);  // creating a queue of doubles
    dQueue.enqueue(1.1);
    dQueue.enqueue(2.2);
    dQueue.enqueue(3.3);
    std::cout << dQueue.peek() << std::endl;  // should print 1.1
    std::cout << dQueue.dequeue() << std::endl;  // should print 1.1
    std::cout << dQueue.dequeue() << std::endl;  // should print 2.2

    return 0;
}
