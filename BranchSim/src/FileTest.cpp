#include "base.h"

using namespace std;

char *filepath = NULL;
int number;
char my_addrss[20] ;
uint32_t addr;

void FileTest(void)
{
    // char filepath[100];
    ifstream in_file;
    char address[13];
    // cout << "\nPlease input the path and name that you want to test!" << endl;
    // cout << "\n\t C:\\temp\\myfile.trace" << endl;
    // cout << "\n\t myfile.trace" << endl;
    // cin >> filepath;
    // cout << filepath;
    in_file.open(filepath,ios::in);

    if(in_file.fail()){
        cout << filepath << endl;
        cout << "Open ERROR! Please Check the Path and Name, and Input again!" << endl;
        return ;
    }
    // while(in_file.fail())
    // {
    //     cout << "Open ERROR! Please Check the Path and Name, and Input again!" << endl;
    //     cin >> filepath;
    //     in_file.open(filepath,ios::in);
    // }

#ifdef OUTPUT
    int i_line_proceded = 0;
    ofstream out_put;
    out_put.open("test.log",ios::out);
#endif // OUTPUT

    while(!in_file.eof())
    {
        in_file.getline(address,13);
#ifdef __GNUC__
        if(address[0] == 'n'){
            number = atoi(address+1);
            // printf("%8d\n",number);
            for(uint32_t i=1; i<=number; i++){
                // printf("%8x\n",addr+i*4);
                sprintf(my_addrss,"l 0x%8x",addr+i*4);
                // printf("%s\n",my_addrss);
                bool __attribute__((unused))  is_success = GetHitNum(my_addrss); //in case of the warning of "Wunused-but-set-variable"
            }
        }else{
            bool __attribute__((unused))  is_success = GetHitNum(address); //in case of the warning of "Wunused-but-set-variable"
            addr = strtoul(address+2,NULL,16);
            // printf("%8x\n",addr);
            // if(addr == 0x30000064) break;
        }
        
        // addr = atoi(address+4);
        
#endif
#ifndef __GNUC__
        bool is_success = GetHitNum(address);
#endif
        assert(is_success);
#ifdef OUTPUT
        i_line_proceded++;
        out_put << i_line_proceded << endl;
        cout << address << endl;
#endif // OUTPUT
    }

#ifdef OUTPUT
    out_put.close();
#endif // OUTPUT
    in_file.close();
    GetHitRate();
}
