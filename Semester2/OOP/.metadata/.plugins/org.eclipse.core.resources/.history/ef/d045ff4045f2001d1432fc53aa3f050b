/*
 * IOT.cpp
 *
 *  Created on: May 6, 2023
 *      Author: safi
 */
//============================================================================
// Name        : IOT.cpp
// Author      : Saif Ur Rehman
// ROLL NO     :i22-1697
//============================================================================
#include "IOT.h"
//constructor
IOT::IOT(char name[],float temp,float sugr,int pulserate,float Bmi,int oxign) {
	this->temperature=temp;
	this->sugar_level=sugr;
	this->pulse=pulserate;
	this->BMI=Bmi;
	this->oxygen_saturation_prcnt=oxign;

}
//=operator overloaded.
void IOT::operator=(IOT & I)
{
	this->temperature=I.temperature;
	this->sugar_level=I.sugar_level;
	this->pulse=I.pulse;
	this->BMI=I.BMI;
	this->Bp[0]=I.Bp[0];
	this->Bp[1]=I.Bp[1];
	this->oxygen_saturation_prcnt=I.oxygen_saturation_prcnt;
}
//randomly generate sensor value.
void IOT::update()
{
	this->temperature=90+static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/(104- 90)));
	this->sugar_level=50 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/(400 - 50)));
	this->BMI=16 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/(40- 16)));
	this->oxygen_saturation_prcnt=75+(rand() % (100-74)) ;
	this->pulse=50+(rand() % (120-50));
	this->Bp[0]=80+(rand() % (190-80));
	this->Bp[1]=50+(rand() % (130-50));
}
//Dispaly IOT readings.
void IOT::Dispaly()
{
	cout<<"\nBMI:"<<this->BMI<<"kg/m^2";
	cout<<"\nOxygen Saturation:"<<this->oxygen_saturation_prcnt<<"%";
	cout<<"\nPulse:"<<this->pulse<<"bpm";
	cout<<"\nTemperature:"<<this->temperature<<"°F";
	cout<<"\nSugar Level:"<<this->sugar_level<<"mg/dL";
	cout<<"\nBlood Pressure:"<<this->Bp[0]<<"/"<<this->Bp[1]<<"mmHg\n";
}
//Below are getters and setters.
float IOT::getBmi() const {
	return BMI;
}

int IOT::getBp(int index) const {
	return Bp[index];
}
int IOT::getOxygenSaturationPrcnt() const {
	return oxygen_saturation_prcnt;
}

int IOT::getPulse() const {
	return pulse;
}

float IOT::getSugarLevel() const {
	return sugar_level;
}

void IOT::setBmi(float bmi) {
	BMI = bmi;
}

void IOT::setOxygenSaturationPrcnt(int oxygenSaturationPrcnt) {
	oxygen_saturation_prcnt = oxygenSaturationPrcnt;
}

void IOT::setPulse(int pulse) {
	this->pulse = pulse;
}

void IOT::setSugarLevel(float sugarLevel) {
	sugar_level = sugarLevel;
}

void IOT::setTemperature(float temperature) {
	this->temperature = temperature;
}
void IOT::setBp(int val,int index)
{
	this->Bp[index]=val;
}
float IOT::getTemperature() const {
	return temperature;
}
void IOT::writeIOT(string path)
{
	this->update();
	this->encryptIOT();
	ofstream fout;
	fout.open(path,ios::binary|ios::app);
	fout.write(reinterpret_cast<char *>(&(*this)), sizeof(*this));
	fout.close();
}
void IOT::readIOT(string path,bool check)
{
	ifstream fin;
	fin.open(path,ios::binary);
	int i=1;
	while(fin.read((char *)(&(*this)),sizeof(*this)))
	{
		this->decryptIOT();
		if(check==1)
		{
			cout<<"\n"<<i<<"......\n";
			this->Dispaly();
			i++;
		}
	}
	fin.close();
}
void IOT::encryptIOT()
{
	this->Bp[0]<<=2;
	this->Bp[1]<<=2;
	this->BMI+=90;
	this->oxygen_saturation_prcnt<<=2;
	this->pulse<<=2;
	this->sugar_level+=90;
	this->temperature+=90;
}
void IOT::decryptIOT()
{
	this->Bp[0]>>=2;
	this->Bp[1]>>=2;
	this->BMI-=90;
	this->oxygen_saturation_prcnt>>=2;
	this->pulse>>=2;
	this->sugar_level-=90;
	this->temperature-=90;
}
//Destructor.
IOT::~IOT() {
	// TODO Auto-generated destructor stub
}
char getch(void)				//function to take input a single character.
{
 // Set terminal to raw mode
  system("stty raw");

  // Wait for single character
  char input = getchar();
  // Reset terminal to normal "cooked" mode
  system("stty cooked");
  return input;
}

