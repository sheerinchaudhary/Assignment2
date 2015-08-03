//This is Sheerin Chaudhary  and this is my 2nd assignment which is about political parties students have registered for.
#include <iostream>
#include <cmath>
using namespace std;
int main()

{
    
    int id,numstu = 0;
    int demo,rep,notr;
    double rdemo,rrep,rnotr;
    int totalnumbstu,finalpol;
    
    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(4);
    
    cout << "This program will compute the political parties of students that registered in a survey group. " << endl;
    cout << "Enter the Survey group ID,the amount of Democrats registered, amount that registered as Republican, and students who did not registered " << endl;
    cout << "To stop, enter a negative value of survey group ID. ";
    cin >> id;
    
    while(id>=0) {
        
        cout << "How many Democrats registered? ";
        cin >> demo;
        
        cout << "How many Republicans registered? ";
        cin >> rep;
        
        cout << "How many students did not register? ";
        cin >> notr;
        
        cout << "survey group of " << id << " results " << demo << " Democrats " << rep << " Republican " << notr << " not registered" << endl;
        
        totalnumbstu = demo + rep + notr;
        
        cout << "total number of students is " << totalnumbstu << endl;
        
        if(totalnumbstu >= 25) {
            cout << "This survey group is complete" << endl;
        }
        else {
            totalnumbstu = 25 - totalnumbstu;
            cout<<"there are "<< totalnumbstu << " needed to reach 25 "<<endl;
        }
        
        rdemo = (double) demo / totalnumbstu;
        rrep = (double) rep / totalnumbstu;
        rnotr = (double) notr / totalnumbstu;
        cout << "Democrat ratio is   " << rdemo << "  Republican ratio is  " << rrep << "  did not register  " << rnotr << endl;
        
        if(notr > demo)
            cout << "Number who did not register is greater than the number who registered as Democrat" << endl;
        
        else
            cout << "Number who did not register is not greater than the number who registered as Democrat" << endl;
        
        if(notr >= rep)
            cout << "Number who did not register is greater than or equal number who registered as Republican" << endl;
        
        else
            cout << "Number who did not register is not greater than equal to number who registered as Republican" << endl;
        
        
        finalpol = demo + rep - 3 * notr;
        
        if(finalpol < 0)
            finalpol = 0;
        cout << "final political score is " << finalpol << endl;
        cout<<endl<<endl;
        cin >> id;
        numstu++;
    }
    
    cout << "The total number of surveys group that have been processed in my program are  " << numstu << endl;
    return 0;
    
}