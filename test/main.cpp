#include "message.hpp"
int main(int argc,char** args){
    FascodeUtil::msg msgkun=FascodeUtil::msg();
    msgkun.print(FascodeUtil::INFO,"tdkr","sample");
    msgkun.print(FascodeUtil::DEBUG,"tdkr","sample");
    msgkun.print(FascodeUtil::WARN,"tdkr","sample");
    msgkun.print(FascodeUtil::ERR,"tdkr","sample");
    return 0;
}