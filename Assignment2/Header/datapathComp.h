#ifndef DATAPATH_COMP
#define DATAPATH_COMP
class datpathComp{
private:
    std::string name;
    std::string tokenID;
    std::string usage;
    std::vector<int> inputsizes;
    std::vector<int> outputsizes
    bool canSign;
    std::vector<float> timeDelay;

public:
    datapathComp::datpathComp();
    void datapathComp::setName(std::string aString);
    void datapathComp::addInputSize(int aVal);
    void datapathComp::addOutputSize(int aVal);
    void datapathComp::setTokenID(std::string aString);
    void datapathComp::setUsage(std::string aString);
    void datapathComp::setCanSign(bool tf);
    void datapathComp::addTimeDelay(float aDelay);
    std::string datapathComp::getName();
    std::string datapathComp::getTokenID();
    std::string datapathComp::getUsage();
    bool datapathComp::getCanSign();
    std::vector<int> datapathComp::getInputSize();
    std::vector<int> datapathComp::getOutputSize(); 
    std::vector<float> datapathComp::getTimeDelay();


};
#endif