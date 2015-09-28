#include "includes.h"
class Behavioral_Netlist{
	std::vector<Ports> list_inputs;
	std::vector<Ports> list_outputs;
	std::vector<Wires> list_wires;
	std::vector<DataPath_Components> list_components;
	std::string inputFileName;
	std::string outputFileName;

}