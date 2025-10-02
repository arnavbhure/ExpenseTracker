#include<iostream>
#include<fstream>
using namespace std;
struct expense
{
    string date;
    string category;
    float amount;
    string extranote;
};
void totalamount()
{
    expense e;
    cout<<endl;
    float tamount=0;
    cout<<"        All Expenses : "<<endl;
    cout<<endl;
    ifstream file("expenses.txt");
    if(file.is_open())
    {
        while(file>>e.date>>e.category>>e.amount>>e.extranote)
        {
            cout<<"Date : "<<e.date<<endl;
            cout<<"Category : "<<e.category<<endl;
            cout<<"Amount : "<<e.amount<<endl;
            cout<<"Extra Note : "<<e.extranote<<endl;
            cout<<endl;
            tamount += e.amount;
        }
        cout<<endl;
        cout<<"--------------------------------------"<<endl;
        cout<<"   Your Total Expense is : "<<tamount<<endl;
        cout<<endl;

    }
    else 
    {
        cout<<"File failed to open !!"<<endl;
        cout<<endl;
    }

    cout<<"ThankYou for using the program ."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Programmed By ~ ArnavBhure"<<endl;
   
}


void display()
{
    expense e;
    cout<<endl;
    cout<<"Your Total Expenses Added by you are :"<<endl;
    cout<<endl;
    ifstream file("expenses.txt");
    if(file.is_open())
    {
        while(file>>e.date>>e.category>>e.amount>>e.extranote)
        {
            cout<<"Date : "<<e.date<<endl;
            cout<<"Category : "<<e.category<<endl;
            cout<<"Amount : "<<e.amount<<endl;
            cout<<"Extra Note : "<<e.extranote<<endl;
            cout<<endl;
        }
        file.close();
    }
    else 
    {
        cout<<"Failed to open the file!!"<<endl;
        cout<<endl;
    }

    cout<<"ThankYou for using the program ."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Programmed By ~ ArnavBhure"<<endl;
}


void add()
{
    expense e;
    cout<<"Enter Date of Expense :(DD/MM/YYYY)";
    cin>>e.date;
    cout<<endl;
    cout<<"Enter category of Expense : ";
    cin>>e.category;
    cout<<endl;
    cout<<"Enter the amount : ";
    cin>>e.amount;
    cout<<endl;
    cout<<"Add any extra note (if any) : ";
    cin>>e.extranote;
    cout<<endl;

    ofstream file("expenses.txt" , ios::app);
    if(file.is_open())
    {
        file<<e.date<<" "<<" "<<e.category<<" "<<e.amount<<" "<<e.extranote<<endl;
        file.close();
        cout<<endl; 
        cout<<"Your expense is successfully added !"<<endl;
        cout<<endl;
    }
    else {
        cout<<"Failed to open the file !!"<<endl;
        cout<<endl;
    }

    cout<<"ThankYou for using the program ."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Programmed By ~ ArnavBhure"<<endl;
}


int main()
{
    int choice;
    cout<<"    Welcome to the Expense Calculator"<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<endl;
    cout<<"Here you be will able to track your Expenses and manage them :"<<endl;
    cout<<endl;
    cout<<"Select from the below options to continue :"<<endl;
    cout<<"1. Add Expense"<<endl;
    cout<<"2. Remove Expense"<<endl;
    cout<<"3. Show Total Expense "<<endl;
    cout<<"4. To remove all the expenses "<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;

    switch(choice)
    {
        case 1 :
        add();
        break;
        
        case 2 :
        display();
        break;

        case 3 :
        totalamount();
        break;
        
        case 4 :
        cout<<endl;
        cout<<"Are you sure to delete all the Expenses ?"<<endl;
        cout<<"     Enter 'Y' for Yes and 'N' for No "<<endl;
        char ch;
        cin>>ch;
        if(ch=='Y')
        {
        cout<<endl;
        remove("expenses.txt");
        ifstream file("expenses.txt");
        if(file.is_open())
        {
            cout<<"Error Deleting the Expenses!!"<<endl;
            cout<<endl;
            cout<<"ThankYou for using the program ."<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"Programmed By ~ ArnavBhure"<<endl;
        }
        else {
            cout<<"All Expenses are Deleted  Succesfully"<<endl;
            cout<<"ThankYou for using the program ."<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"Programmed By ~ ArnavBhure"<<endl;
        }
        }
        else{
            cout<<"Your Expenses are not Deleted !"<<endl;
            cout<<endl;
            cout<<"ThankYou for using the program ."<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"Programmed By ~ ArnavBhure"<<endl;
        }
        break;
        
        case 5:
        cout<<"Exiting the Program......"<<endl;
        cout<<endl;
        cout<<"Programmed By ~ ArnavBhure"<<endl;
        return 0;


        default :
        cout<<"Invalid Choice !!!!"<<endl;
        cout<<endl;
        break;
    }
    return 0;

}
