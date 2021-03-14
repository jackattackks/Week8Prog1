//
//  main.cpp
//  Week8Prog1
//
//  Created by Jackie on 3/10/21.
//

#include <iostream>
using namespace std;
#include <string>

class TEST {
private:
public:
//    FUNCTION 1
    void testNullPtr(){
        int * ptrInt = new int;
        ptrInt = NULL;
        *ptrInt = 42;
    }
//   FUNCTION 2
    void memoryLeak(){
        double * ptrDouble = new double;
        *ptrDouble = 3.123456789;
    }

//   FUNCTION 3
    string * deletePointer(){
        string * ptrString = new string;
        *ptrString = "Carlos";
        return ptrString;
    }
    
//   FUNCTION 4
    void testTwoAlias(){
        int * ptrAlias1 = new int;
        *ptrAlias1 = 42;
        
        int * ptrAlias2 = new int;
        ptrAlias2 = ptrAlias1;
        
        cout << &ptrAlias1 << " and " << &ptrAlias2 << endl;
        cout << *ptrAlias1 << " and " << *ptrAlias2 << endl;
        
    }
};

int main (){
    TEST TC1;
//    TEST 1
    TC1.testNullPtr();
//will throw an error because it is null so there is nothing there in that memory
    
//    TEST 2
    for (int i = 0; i > 0; i++){
        TC1.memoryLeak();
    }
//will also throw an error - if it worked properly then it would run infinitely and not let everything below run
    
//    TEST 3
    string *ptrS;
    ptrS = TC1.deletePointer();
    *ptrS = "you've been dereferenced";
//EXPLAIN
    
//    TEST 4
    TC1.testTwoAlias();
//EXPLAIN
}
