#include"Block.cpp"
#include"Complex.cpp"
#include"Holiday.cpp"
bool inSameMonth(Holiday H1,Holiday H2);
double avgDate(Holiday H[],int size);
using namespace std;
int main()
{
	cout<<Block::Blockcount<<endl;
	Block B1(2,2,2,"black");
	cout<<Block::Blockcount<<endl;
	B1.print();
	cout<<s;
	/*Complex C1;
	Complex C2(5,5);
	Complex C3;
	C3=C1.addComplex(C2);
	cout<<C3.getReal()<<endl;
	cout<<C3.getImaginary()<<endl;
	Holiday h1;
	Holiday h2;
	h1.setMonth("December");
	h2.setMonth("December");
	cout<<inSameMonth(h1,h2)<<endl;
	Holiday h[4];
	h[0].setDay(4);
	h[1].setDay(1);
	h[2].setDay(2);
	h[3].setDay(3);
	cout<<avgDate(h,4);*/


}
bool inSameMonth(Holiday H1,Holiday H2)
{
	if(H1.getMonth()==H2.getMonth())
	{
		return 1;
	}
	else
		return 0;
}
double avgDate(Holiday H[],int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum+=H[i].getDay();
	}
	return float(sum)/size;

}
