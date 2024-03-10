#ifndef PROCESSHEAP_H
#define PROCESSHEAP_H
#include "process.h"
#include <stdexcept>

template<typename T>
class ProcessHeap
{
private:
    T *heap;
    int size;
    int heap_size;

    // Helper function to heapify down (maintain the min-heap property)
    void heapifyDown(int index)
    {
        int leftChildIndex = 2 * index ;
        int rightChildIndex = 2 * index + 1;
        int minIndex = index;

        if (leftChildIndex < size && heap[leftChildIndex] < heap[minIndex])
        {
            minIndex = leftChildIndex;
        }

        if (rightChildIndex < size && heap[rightChildIndex] < heap[minIndex])
        {
            minIndex = rightChildIndex;
        }

        if (minIndex != index)
        {
            T temp=heap[index];
            heap[minIndex]=heap[index];
            heap[minIndex]=temp;
            heapifyDown(minIndex);
        }
    }

public:
    // Constructor
    ProcessHeap(int heap_size){
        heap = new T[heap_size]; 
        this->heap_size=heap_size;
        size=0;
    }

    // Member function to insert a process into the heap
    void insert(const T &process)
    {
        if (size == heap_size-1)
        {
            cout<<"\nHeap is Full:\n";
        }
        heap[++size] = process;
        int currentIndex = size;
        int parentIndex = (currentIndex) / 2;

        while (currentIndex > 0 && heap[currentIndex] < heap[parentIndex])
        {
            T temp=heap[currentIndex];
            heap[currentIndex]=heap[parentIndex];
            heap[parentIndex]=temp;
            currentIndex = parentIndex;
            parentIndex = (currentIndex) / 2;
        }
    }

    // Member function to extract the process with the highest priority from the heap
    T extractMax()
    {
        if (isEmpty())
        {
            cout<<"Heap is Empty.\n";
        }

        T maxProcess = heap[1];

        heap[1] = heap[size];
        size--;

        heapifyDown(0);

        return maxProcess;
    }

    // Member function to check if the heap is empty
    bool isEmpty() const
    {
        return size == 0;
    }
};
class VM
{
public:
    int id;
    double load_capacity;
    double remaining_load;
    Queue<Process> Pr;
    // Constructor with automatic ID assignment
    VM(double capacity)
        : id(assignNextId()), load_capacity(capacity), remaining_load(capacity)
    {
    }

    // Member function to check if the VM is full
    bool LoadisFull()
    {
        // You can customize the condition based on your requirements
        return (remaining_load <= 0);
    }
    void display_vm()
    {
        cout<<"\nVM id :"<<this->id;
        cout<<"\nLoad capacity:"<<this->load_capacity;
        cout<<"\nRemianing Load value:"<<this->remaining_load;
        cout<<"\nCurrent Load is :"<<this->current_load();
        cout<<"\n------------Dispalying queue of this vm------------";
        this->Pr.display();
        cout<<"\n------------Dispalying queue of this vm------------\n";
    }
    double current_load()
    {
        return load_capacity-remaining_load;
    }
    void decreaseLoad(double amount)
    {
        if (amount > 0 && (load_capacity-remaining_load) >= amount)
        {
            remaining_load += amount;
            std::cout << "Load decreased by " << amount << std::endl;
        }
        else
        {
            double dec_val=this->current_load();
            this->remaining_load+=dec_val;
        }
    }

private:
    static int nextId; // Static variable to keep track of the next available ID

    // Function to assign the next ID and increment the static variable
    static int assignNextId()
    {
        return nextId++;
    }
};

// Initialize the static variable outside the class definition
int VM::nextId = 1;

#endif