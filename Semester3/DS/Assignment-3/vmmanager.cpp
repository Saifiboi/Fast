#include "processheap.h"
class VMManager
{
private:
    vector<VM> vms;
    ProcessHeap<Process> process_Heap;

    // Helper function to allocate processes to VMs
    void allocateProcesses()
    {
        while (!(process_Heap.isEmpty()))
        {
            Process process = process_Heap.extractMax();
            allocateProcess(process);
        }
    }

    // Helper function to allocate a process to a VM
    void allocateProcess(Process &process)
    {
        bool check1 = 0, check2 = 0;
        for (int i = 0; i < vms.size(); i++)
        {
            if (!vms[i].LoadisFull())
            {
                if (process.load_difference() >= vms[i].remaining_load)
                {
                    process.allocated_load += vms[i].remaining_load;
                    vms[i].remaining_load = 0;
                }
                else if (process.load_difference() < vms[i].remaining_load)
                {
                    vms[i].remaining_load -= process.load_difference();
                    process.allocated_load = process.required_load;
                    break;
                }
            }
        }
    }

public:
    // Member function to create VMs
    VMManager() : process_Heap(30)
    {
    }
    bool decreaseLoadRandomly()
    {
        bool check = 0;
        for (int i = 0; i < vms.size(); i++)
        {
            double decreaseAmount = rand() % 20 + 1;
            if (vms[i].remaining_load + decreaseAmount < vms[i].load_capacity)
            {
                vms[i].remaining_load += decreaseAmount;
                check = 0;
            }
            else if (vms[i].remaining_load + decreaseAmount == vms[i].load_capacity)
            {
                check = 1;
            }
            else
            {
                i--;
            }
        }
        return check;
    }
    void createVMs(int numVMs, double initialload)
    {
        vms.clear(); // Clear existing VMs

        for (int i = 1; i <= numVMs; ++i)
        {
            vms.push_back(VM(initialload));
        }
    }

    // Member function to read workload from a file and insert into the heap
    void readWorkloadFromFile(const string &filename)
    {
        ifstream inputFile(filename);

        if (!inputFile.is_open())
        {
            cerr << "Error opening file: " << filename << endl;
            return;
        }

        double load_requirement;
        int priority;

        while (inputFile >> load_requirement >> priority)
        {
            process_Heap.insert(Process("Process", load_requirement, priority));
        }

        inputFile.close();
    }

    // Member function to allocate processes to VMs
    void allocateWorkload()
    {
        allocateProcesses();
    }
    void insert_heap()
    {
        for (int i = 0; i < vms.size(); i++)
        {
            while (!vms[i].Pr.isEmpty())
            {
                process_Heap.insert(vms[i].Pr.getFront());
                vms[i].Pr.dequeue();
            }
        }
    }
    void distribute_loads(double load)
    {
        while (!process_Heap.isEmpty())
        {
            Process process = process_Heap.extractMax();
            distribute_load(load, process);
        }
    }
    void distribute_load(double load, Process &process)
    {
        bool check1 = 0, check2 = 0;
        for (int i = 0; i < vms.size(); i++)
        {
            if (vms[i].current_load() < load)
            {
                if (vms[i].load_capacity == vms[i].remaining_load)
                {
                    if (process.load_difference() >= load)
                    {
                        process.allocated_load += load;
                        vms[i].remaining_load = vms[i].load_capacity - load;
                    }
                    else if (process.load_difference() < load)
                    {
                        vms[i].remaining_load -= process.load_difference();
                        process.allocated_load = process.required_load;
                        break;
                    }
                }
                else
                {
                    double curr_load = vms[i].load_capacity - vms[i].remaining_load;
                    double load_to_add = load - curr_load;
                    if (load_to_add != 0)
                    {
                        if (process.load_difference() >= load_to_add)
                        {
                            process.allocated_load += load_to_add;
                            vms[i].remaining_load = vms[i].load_capacity - load_to_add;
                        }
                        else if (process.load_difference() < load_to_add)
                        {
                            vms[i].remaining_load -= process.load_difference();
                            process.allocated_load = process.required_load;
                            break;
                        }
                    }
                }
            }
        }
    }
    bool destroy_vm()
    {
        srand(time(0));
        if (rand() % 10 == 1)
        {
            vms.pop_back();
            return 1;
        }
        return 0;
    }
    void manage_load()
    {
        double load_sum;
        double load_average;
        for (int i = 0; i < vms.size(); i++)
        {
            load_sum += vms[i].current_load();
        }
        load_average = load_sum / vms.size();
        insert_heap();
        if (destroy_vm())
        {
            load_average = load_sum / vms.size();
        }
        distribute_loads(load_average);
        for (int i = 0; i < vms.size(); i++)
        {
            vms[i].display_vm();
        }
    }
};
int main()
{
    VMManager vm_Manager;

    // Create some VMs initially
    vm_Manager.createVMs(3, 80);

    // Read workload from the user or file and insert into the heap
     cout << "Enter the path to the file containing workload specifications: ";
     string filename;
     cin >> filename;
    vm_Manager.readWorkloadFromFile(filename);
    cout<<"\nProcesses read from file successfully!";
    // Allocate workload to VMs
    vm_Manager.allocateWorkload();
    cout<<"\nWorkLoad allocated successfully!";

    // Call manageLoad every 5 seconds
    while (true)
    {
        // Manage load
        bool complete = vm_Manager.decreaseLoadRandomly();
        if (complete)
        {
            cout<<"\nThe Processes are executed completely:\n";
            break;
        }
        vm_Manager.manage_load();

        // Wait for 5 seconds
         this_thread::sleep_for( chrono::seconds(5));
    }

    return 0;
}
double generateRandomWorkload()
{
    return rand() % 100 + 1;
}

// Function to write processes to a binary file
void writeProcessesToBinaryFile(Process *processes[], size_t size, const string &filename)
{
    ofstream outputFile(filename, ios::binary);

    if (!outputFile.is_open())
    {
        cout << "Error opening file: " << filename << endl;
        return;
    }

    for (size_t i = 0; i < size; ++i)
    {
        // Write each Process object to the binary file
        outputFile.write(reinterpret_cast<const char *>(&processes[i]), sizeof(Process));
    }

    outputFile.close();
    cout << "Processes written to binary file: " << filename << endl;
}

// int main()
// {
//     // Seed the random number generator
//     srand(static_cast<unsigned int>(time(nullptr)));

//     // Generate 10 processes with random workload values between 1 and 100
//     Process *processes[10];
//     for (int i = 0; i < 10; ++i)
//     {
//         double workload = generateRandomWorkload();
//         int priority = rand() % 10 + 1; // Random priority between 1 and 10

//         processes[i] = new Process("Process" + to_string(i + 1), workload, priority);
//     }

//     // Write processes to a binary file
//     writeProcessesToBinaryFile(processes, 10, "processes.dat");

//     return 0;
// }
