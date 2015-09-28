#include "Operations_Net.h"
#include "String_Functions.h"
Operations_Net::Operations_Net(){
	a="";
	b="";
	clk="";
	rst="";
	sel="";
	o1="";
	o2="";
	o3="";
	component=undef;
	instantiation="";
	operation=undef;
	size=undef;
};

Operations_Net::~Operations_Net(){
};

void Operations_Net::setA(std::string aVal){
	this->a=aVal;
};

void Operations_Net::setB(std::string aVal){
	this->b=aVal;	
};

void Operations_Net::setClk(std::string aVal){
	this->clk=aVal;
};

void Operations_Net::setRst(std::string aVal){
	this->rst=aVal;
};

void Operations_Net::setSel(std::string aVal){
	this->set=aVal;
};

void Operations_Net::setO1(std::string aVal){
	this->o1=aVal;
};

void Operations_Net::setO2(std::string aVal){
	this->o2=aVal;
};

void Operations_Net::setO3(std::string aVal){
	this->o3=aVal;
};

void Operations_Net::setOp(arithOp aOp){
	this->operation=aOp;
};

void Operations_Net::setSize(bitSize aSize){
	this->size=aSize;
};

void Operations_Net::setInstant(std::string aLine){
	std::vector<string> lineTokens;
	std::string temp;
	temp=aLine.resize(aLine.size());
	lineTokens=splitString(aLine,' ');

	if(lineTokens.at(0).compare("input")){
		this.setOp(input);
	}
};

std::string Operations_Net::getA(){
	return a;
};
std::string Operations_Net::getB(){
	return b;
};
std::string Operations_Net::getClk(){
	return clk;
};
std::string Operations_Net::getRst(){
	return rst;
};
std::string Operations_Net::getSel(){
	return sel;
};
std::string Operations_Net::getO1(){
	return o1;
};
std::string Operations_Net::getO2(){
	return o2;
};
std::string Operations_Net::getO3(){
	return o3;
};
arithOp Operations_Net::getOp(){
	return operation;
};
bitSize Operations_Net::getSize(){
	return size;
};
std::string Operations_Net::getInstant(){
	return instantiation;
};