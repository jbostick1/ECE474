class datpathComp{
private:
    std::string name;
    std::string tokenID;
    std::string usage;
    std::vector<int> inputsizes;
    std::vector<int> outputsizes;
    std::vector<int> 
    bool canSign;
    std::vector<float> timeDelay;

public:
    datapathComp::datpathComp(){
        name="";
        tokenID="";
        usage="";
        canSign=false;
    }
    void datapathComp::setName(std::string aString){
        this->name=aName;
    }
    void datapathComp::addInputSize(int aVal){
        this->inputsizes.add(aVal);
    }
    void datapathComp::addOutputSize(int aVal){
        this->outputsizes.add(aVal);

    }
    void datapathComp::setTokenID(std::string aString){
        this->tokenID=aString;
    }
    void datapathComp::setUsage(std::string aString){
        this->usage=aString;
    }
    void datapathComp::setCanSign(bool tf){
        this->canSign=tf;
    }
    void datapathComp::addTimeDelay(float aDelay){
        this->timeDelay.add(aDelay);
    }
    void datapathComp::addParameters(int inputSize,int outputSize, float timeDelay){
        this.addTimeDelay(timeDelay);
        this.addOutputSize(outputSize);
        this.addInputSize(inputSize);
    }
    std::string datapathComp::getName(){

    }
    std::string datapathComp::getTokenID(){

    }
    std::string datapathComp::getUsage(){

    }
    bool datapathComp::getCanSign(){

    }
    std::vector<int> datapathComp::getInputSize(){

    }
    std::vector<int> datapathComp::getOutputSize(){

    } 
    std::vector<float> datapathComp::getTimeDelay(){

    }


};