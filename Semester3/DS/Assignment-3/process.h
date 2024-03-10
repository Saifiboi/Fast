
#ifndef PROCESS_H
#define PROCESS_H
#include "header.h"
class Process
{
public:
    std::string name;
    double required_load;
    double allocated_load;
    int priority;
    bool in_execution;
    double currentExecutionPercent;

    Process(const std::string &processName, double loadRequirement, int Processpriority)
        : name(processName), required_load(loadRequirement),
          allocated_load(0), currentExecutionPercent(0), priority(Processpriority), in_execution(0)
    {
    }
    Process()
    {

    }
    Process(const Process &other)
        : name(other.name), required_load(other.required_load),
          allocated_load(other.allocated_load), currentExecutionPercent(other.currentExecutionPercent),
          priority(other.priority), in_execution(other.in_execution)
    {
    }
    void execute(double percent)
    {

        if (percent > 0 && percent <= 100)
        {
            if (currentExecutionPercent + percent <= 100)
            {
                currentExecutionPercent += percent;
                std::cout << "Executing " << name << ": " << currentExecutionPercent << "% completed." << std::endl;
                in_execution = 1;
            }
            else
            {
                in_execution = 0;
                currentExecutionPercent = 100;
            }
        }
        else
        {
            std::cerr << "Invalid percentage. Execution aborted." << std::endl;
        }
    }
    void display_Process()
    {
        cout<<"\nName of Process:"<<this->name;
        cout<<"\nRequired Load for this process:"<<this->required_load;
        cout<<"\nAllocated Load of this Process:"<<this->allocated_load;
        cout<<"\nPriority of this Process is :"<<this->priority;
    }
    double load_difference()
    {
        return required_load-allocated_load;
    }
    bool operator<(const Process &other) const
    {
        return priority > other.priority;
    }
    
    bool operator>(const Process &other) const
    {
        return priority < other.priority;
    }
};
// Queue class
template <typename T>
class Queue
{
private:
    QueueNode<T> *front;
    QueueNode<T> *rear;

public:
    // Constructor
    Queue() : front(nullptr), rear(nullptr) {}

    // Destructor
    ~Queue()
    {
        clear();
    }

    // Function to check if the queue is empty
    bool isEmpty() const
    {
        return front == nullptr;
    }

    // Function to enqueue a new element
    void enqueue(const T &value)
    {
        QueueNode<T> *newNode = new QueueNode<T>(value);

        if (isEmpty())
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Function to dequeue an element
    void dequeue()
    {
        if (!isEmpty())
        {
            QueueNode<T> *temp = front;
            front = front->next;
            delete temp;

            // If the queue becomes empty after dequeue, update rear to nullptr
            if (front == nullptr)
            {
                rear = nullptr;
            }
        }
        else
        {
            std::cerr << "Queue is empty. Cannot dequeue." << std::endl;
        }
    }

    // Function to get the front element of the queue
    T getFront() const
    {
        if (!isEmpty())
        {
            return front->data;
        }
        else
        {
            std::cerr << "Queue is empty. No front element." << std::endl;
            // Returning a default value, assuming T has a default constructor
            return T();
        }
    }

    // Function to clear the queue
    void clear()
    {
        while (!isEmpty())
        {
            dequeue();
        }
    }
    void execute_process(double value)
    {
        T front_process=getFront();
        front_process.execute(value);
        if(front_process.in_execution==0)
        {
            dequeue();
        }
    }
    // Function to display the elements of the queue
    void display() const
    {
        QueueNode<T> *current = front;

        std::cout << "Queue: ";
        while (current != nullptr)
        {
            current->data.display_Process();
            current = current->next;
        }
        std::cout << std::endl;
    }
};
#endif