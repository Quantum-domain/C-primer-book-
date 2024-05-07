#include"Sales_data.chh"
#include<string>
std::string;
std::cin;
std::cout;
std::endl;
std::cerr;
int main()
{
  Sales_data data1,data2;
  if(data1.bookNo==data2.bookNo)
  {
    unsigned totalCnt=data1.units_sold+data2.units_sold;
  doubletotalRevenue=data1.revenue+data2.revenue;
  cout<<data1.bookNo<<" "<<totalCnt
      <<" "<<totalRevenue<<" ";
  if(totalCnt!=0)
    cout<<totalRevenue/totalCnt<<std::endl;
  else
    cout<<"(no sales)"<<endl;
  return 0;
  }
  else{
    cerr<<"Data must refer to the same ISBN"
        <<endl;
    return -1;
  }
}
