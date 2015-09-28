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
    float timeDelay;

public:
    datapathComp::datpathComp();
    virtual void datapathComp::setName(std::string aString);
    virtual void datapathComp::addInputSize(int aVal);
    virtual void datapathComp::addOutputSize(int aVal);
    virtual void datapathComp::setTokenID(std::string aString);
    virtual void datapathComp::setUsage(std::string aString);
    virtual void datapathComp::setCanSign(bool tf);
    virtual void datapathComp::setTimeDelay(float aDelay);
    std::string datapathComp::getName();
    std::string datapathComp::getTokenID();
    std::string datapathComp::getUsage();
    bool datapathComp::getCanSign();
    std::vector<int>  datapathComp::getISize();
    float datapathComp::getTimeDelay();


};
#endif