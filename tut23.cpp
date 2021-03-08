#include<iostream>
using namespace std;

class shop
{
    int itemID[100];
    int itemPrice[100];
    int counter;
    public:
    void initcounter(){counter=0;}
    void setprice();
    void displayprice();
};
void shop::setprice()
{
    cout<<"enter id of your item no "<<counter+1<<endl;
    cin>>itemID[counter];
    cout<<"enter price of your item no "<<counter+1<<endl;
    cin>>itemPrice[counter];
    counter++;

}
void shop::displayprice()
{
    for(int i=0;i<counter;i++){
        cout<<"the price of item with id "<< itemID[i] <<"is "<<itemPrice[i]<<endl;
    }
}
int main(){
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    return 0;
}