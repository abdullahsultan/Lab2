#include<iostream>
//#include<string>
using namespace std;
//T0
class Account
{
public:
Account (double initalbalance)
{
  balance = initalbalance;
}
void credit (double amount)
{
  balance=amount+balance;
}
double getBalance(double x)
{
  return balance;
}
double withdraw(double paisa)
{
  if(paisa<=balance)
  {
    balance=balance-paisa;
    return balance;
  }
  else
   return 0;
}

private:
double balance;
};
//T1
class employee
{
public:
  employee(double x,string y,string z){
    monthly_salary=x;
    first_name=y;
    last_name=z;
  }
  void set(){
      double temp;
      monthly_salary=((10*monthly_salary)/100)+monthly_salary;
  }
  string get_fst_name(){
    return first_name;
  }
  string get_lst_name(){
    return last_name;
  }
  double get_salary(){
    return monthly_salary;
  }
private:
  string first_name,last_name;
  double monthly_salary;

};
//T3
class Invoice
{
public:
  Invoice(string num,string des,int qty,double pr){
    number=num;description=des;quantity=qty;price=pr;
  }
  double getInvoiceAmount()
  {return (quantity*price);}
  string getnum(){return number;}
  string getdes(){return description;}
  int getqty(){return quantity;}
  double getprice(){return price;}
private:
  string number;
  string description;
  int quantity;
  double price;
};
// Main
int main ()
{
Account acct1(45); //T0
employee a1(15000,"Ali","Ahmad"),a2(20000,"Usama","Asghar");  //T1
//T0
double withdraw;
std::cout<<"Account 1 Balance is: "<<acct1.getBalance(200)<<"\n";
acct1.credit(2323) ;
std::cout<<"Account1Balanceis:"<<acct1.getBalance(200)<<"\n";
std::cout << "Enter amount to withdraw" << '\n';
cin>>withdraw;
withdraw=acct1.withdraw(withdraw);
if(withdraw == 0)
cout<<"\n Amount exceeded than balance \n";
else
cout<<"Your remaining balance = "<<withdraw<<'\n';
//T1
a1.set();a2.set();
std::cout <<"Salary of "<< a1.get_fst_name()<<" "<<a1.get_lst_name()<<" is = "<<a1.get_salary()<<'\n';
std::cout <<"Salary of "<< a2.get_fst_name()<<" "<<a2.get_lst_name()<<" is = "<<a2.get_salary()<<'\n';

//T3
Invoice tea("1","Tea",2,250),soap("2","Soap",5,50),cookies("3","cookies",3,20)
 cout<<"Item    Description   Quantity    Price";
 cout<<

return 0;
}
