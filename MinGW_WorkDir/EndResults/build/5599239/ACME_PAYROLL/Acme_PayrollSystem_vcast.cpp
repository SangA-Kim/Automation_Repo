/*vcast_header_expansion_start:C:/VCAST/Training/SourceFiles/Payroll/Acme_PayrollSystem.h*/
#include "c:/vcast/mingw/lib/gcc/mingw32/6.3.0/include/c++/string"
#include "c:/vcast/mingw/lib/gcc/mingw32/6.3.0/include/c++/string"
#include "c:/vcast/mingw/lib/gcc/mingw32/6.3.0/include/c++/string"
class Employee
{
  public:
    Employee();
    ~Employee();
    Employee(std::string name, double salary, int age );
    double getSalary(void);
    int getAge(void);
    std::string getName(void);
  public:
    double mSalary;
    std::string mName;
    int mAge;
};
//
//  This is an abstract class.  The method to process a specific paycheck needs to be implemented
//  by a derived class, that knows the specifics of a company's benefits, local taxes, etc...
//  Everything else is implemented here in the base class.
//
class PayrollSystem
{
  public:
    PayrollSystem(double InitialCash);
    bool addEmployee( std::string name, double salary, int age );
    bool removeEmployee( std::string name );
    void addCash( int deposit );
    double runPayroll( void );
    virtual void processPayCheck(Employee emp) = 0;
  public:
    Employee *mEmployeeList[100];
    double mCashOnHand;
    int mNumEmployees;
    double mTotalPayroll;
};
//
//  This is the derived Payroll  class for the ACME Widget company.
//
class Acme_PayrollSystem : public PayrollSystem
{
  public:
    Acme_PayrollSystem(double InitialCash);
    void processPayCheck(Employee emp);
  public:
    double mTaxRate;
    double mTotalTaxCollections;
};
/*vcast_header_expansion_end*/
#include "c:/vcast/mingw/lib/gcc/mingw32/6.3.0/include/c++/iostream"
using namespace std;
//
//  Set the local tax rate here and use the Base Constructor to initialize the base class.
//
Acme_PayrollSystem::Acme_PayrollSystem(double InitialCash ) : PayrollSystem(InitialCash)
{/*vcast_internal_start*/
extern double P_9_1_1;
extern unsigned char SBF_9_1;
if(SBF_9_1) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_328427940
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_328427940
  if ( vcast_is_in_driver ) {
    P_9_1_1 = InitialCash;
    vCAST_COMMON_STUB_PROC_9( 9, 1, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_328427940
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_328427940
  vCAST_USER_CODE_TIMER_START();
  return;
}
/*vcast_internal_end*/
    mTaxRate=.20;
    mTotalTaxCollections = 0;
}
//
//  Process the paycheck for an individual employee.  This is defined as a virtual function in the
//  base class and needs to be implemented here to handle the specifics of ACME.
//
void Acme_PayrollSystem::processPayCheck(Employee emp)
{/*vcast_internal_start*/
extern class ::Employee *P_9_2_1;
extern unsigned char SBF_9_2;
if(SBF_9_2) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_2379122559
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_2379122559
  if ( vcast_is_in_driver ) {
    P_9_2_1 = &emp;
    vCAST_COMMON_STUB_PROC_9( 9, 2, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_2379122559
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_2379122559
  vCAST_USER_CODE_TIMER_START();
  return;
}
/*vcast_internal_end*/
    double Salary;
    Salary = emp.getSalary();
    mTotalTaxCollections += (mTaxRate * Salary);
    // TBD:  print paycheck, process benefits, etc...
}
/*vcast_internal_start*/
double P_9_1_1;
unsigned char SBF_9_1 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
class ::Employee *P_9_2_1;
unsigned char SBF_9_2 = 0;
/*vcast_internal_end*/
