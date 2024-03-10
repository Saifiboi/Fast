#include <iostream>
#include <bitset>
using namespace std;
void populate_memory(int memory[][8])
{
    for (int row = 0; row < 8; row++)
    {
        for (int col = 0; col < 8; col++)
        {
            memory[row][col] = rand() % 100 + 1;
        }
    }
}
void populate_instructions(int instr[])
{
    for (int i = 0; i < 8; i++)
    {
        instr[i] = rand() % 4096;
    }
}
void movmemtoreg(int registers[], int memory[][8], int &row, int &col, int &regindex)
{
    registers[regindex] = memory[row][col];
}
void addmemtoreg(int registers[], int memory[][8], int &row, int &col, int &regindex)
{
    registers[regindex] += memory[row][col];
}
void subregtomem(int registers[], int memory[][8], int &row, int &col, int &regindex)
{
    memory[row][col] -= registers[regindex];
}
void mulregtomem(int registers[], int memory[][8], int &row, int &col, int &regindex)
{
    memory[row][col] *= registers[regindex];
}
void divregtomem(int registers[], int memory[][8], int &row, int &col, int &regindex)
{
    memory[row][col] /= registers[regindex];
}
void andregtoreg(int registers[], int &regindexdest, int &regindexsource)
{
    registers[regindexdest] = registers[regindexdest] & registers[regindexsource];
}
void ormemtoreg(int registers[], int memory[][8], int &row, int &col, int &regindex)
{
    registers[regindex] = registers[regindex] | memory[row][col];
}
void xormemtoreg(int registers[], int memory[][8], int &row, int &col, int &regindex)
{
    registers[regindex] = registers[regindex] ^ memory[row][col];
}
void decodeIns(int ins, int &op, int &reg, int &row, int &col)
{
    col = ins & 7;
    ins = ins >> 3;
    row = ins & 7;
    ins = ins >> 3;
    reg = ins & 7;
    ins = ins >> 3;
    op = ins & 7;
    cout<<"------------------------------------------------------------------------";
    cout<<"\nThe Instruction is Fetched Succesfully!";
    cout<<"\nOP="<<op<<" which in binary ="<<bitset<3>(op);
    cout<<"\nRegister Number="<<reg<<" which in binary ="<<bitset<3>(reg);
    cout<<"\nRow index of memory is ="<<row<<" which in binary ="<<bitset<3>(row);
    cout<<"\nColumn index of memory is ="<<col<<" which in binary ="<<bitset<3>(col);
    cout<<endl;
}
int fetch_instruction(int instructions[])
{
    return instructions[rand() % 8];
}

void display_regnmem(int registers[], int memory[][8])
{
    cout << "\n------------------------------Displaying Registers-----------------------------\n";
    for (int i = 0; i < 8; i++)
    {
        cout << "Reg #" << i + 1 << "." << registers[i] << endl;
    }
    cout << "\n------------------------------Displaying Memory--------------------------------\n\n";
    for (int i = -1; i < 8; i++)
    {
        for (int j = -1; j < 8; j++)
        {
            if(i==-1 && j==-1)
            {
                cout<<" \t";
                continue;
            }
            if (i == -1)
            {
                cout << j << "\t";
                continue;
            }
            if (j == -1)
            {
                cout << i << "\t";
                continue;
            }
            cout << memory[i][j] << "\t";
        }
        if (i == -1)
        {
            cout << endl
                 << endl;
            continue;
        }
        cout<<endl;
    }
}
void execute_instruction(int registers[], int memory[][8], int &op, int &reg, int &row, int &col)
{
    switch (op)
    {
    case 0:
        divregtomem(registers, memory, row, col, reg);
        cout<<"\nSince op was "<<op<<" Which says Divide From Register to Memory.\n";
        break;
    case 1:
        movmemtoreg(registers, memory, row, col, reg);
        cout<<"\nSince op was "<<op<<" Which says Move From Memory to register.\n";
        break;
    case 2:
        addmemtoreg(registers, memory, row, col, reg);
        cout<<"\nSince op was "<<op<<" Which says add From Memory to register.\n";
        break;
    case 3:
        subregtomem(registers, memory, row, col, reg);
        cout<<"\nSince op was "<<op<<" Which says subtract From Register to Memory.\n";
        break;
    case 4:
        andregtoreg(registers, reg, row);
        cout<<"\nSince op was "<<op<<" Which says And logical Operation From Register to Register.\n";
        break;
    case 5:
        ormemtoreg(registers, memory, row, col, reg);
        cout<<"\nSince op was "<<op<<" Which says OR logical Operation From Memory to register.\n";
        break;
    case 6:
        xormemtoreg(registers, memory, row, col, reg);
        cout<<"\nSince op was "<<op<<" Which says XOR logical Operation From Memory to register.\n";
        break;
    case 7:
        mulregtomem(registers, memory, row, col, reg);
        cout<<"\nSince op was "<<op<<" Which says OR logical Operation From Register to Memory.\n";
    }
    cout<<"\n----------------------Displaying segments After Execution----------------------------------\n";
    display_regnmem(registers,memory);
}
int main()
{
    srand(time(0));
    int memory[8][8];
    int instructions[8];
    int registers[8] = {0};
    char ch='y';
    populate_memory(memory);
    populate_instructions(instructions);
    int ins;
    int op,row,col,reg;
    while(ch=='y' || ch=='Y')
    {
        system("clear");
        ins=fetch_instruction(instructions);
        cout<<"\nInstruction is Fetched Successfully!\n";
        cout<<"\nThe Value of instruction is: "<<ins<<" Which in binary is: "<<bitset<12>(ins)<<endl;
        cout<<"Press Any Key to Proceed:\n";
        cin.ignore();
        cin.get();
        system("clear");
        cout<<"\n----------------------Displaying segments Before Execution----------------------------------\n";
        decodeIns(ins,op,reg,row,col);
        display_regnmem(registers, memory);
        cout<<"Press Any Key to Proceed:\n";
        cin.get();
        system("clear");
        execute_instruction(registers,memory,op,reg,row,col);
        cout<<"\nDo You Want to continue:(y/n)";
        cin>>ch;
    }
    return 0;
}