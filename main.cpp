#include <iostream>
#include <string>

using namespace std;

struct Students
{
    string name;
    int age;
    int clas;
    int stat;
};

void print(Students st[],int s)
{
    cout <<"number"<<'\t'<<"name"<<'\t'<<"age"<<'\t'<<"clas"<<'\t'<<"stat"<<endl;
    cout << "=========================================" << endl;
    for (int i = 0; i < s; i++)
    {
        cout << i+1 << '\t' <<st[i].name << '\t' <<st[i].age  << '\t' << st[i].clas<< '\t' << st[i].stat << endl;
    }
}


int main()
{   int t;
    int n;
    string a;
    string b;
    cout<<"count of students: ";
    cin>>n;
    Students student[n]={};
    while (a!="exit"){
    cin>>a;



    if (a=="load"){


        for (int i = 0;i < n; i++)

        {
            cout<<"name: ";
            cin>>student[i].name;
            cout<<"age: ";
            cin>>student[i].age;
            cout<<"clas: ";
            cin>>student[i].clas;
            cout<<"stat: ";
            cin>>student[i].stat;

        }
    }
    if(a=="show"){

    print(student , n);

    }
    if (a=="search")
    {
        cin>>b;
        if (b=="name"){
            cout<<"name:"<<'\t'<<endl;
            string c;
            cin>>c;
            cout <<"number"<<'\t'<<"name"<<'\t'<<"age"<<'\t'<<"clas"<<'\t'<<"stat"<<endl;
            cout << "=========================================" << endl;
            for (int i = 0;i < n; i++)
            if (c==student[i].name)
        {


            cout << i+1 << '\t' <<student[i].name << '\t' <<student[i].age  << '\t' << student[i].clas<< '\t' << student[i].stat << endl;

        }}
        if (b=="age"){
            cout<<"age:"<<'\t'<<endl;
            int c;
            cin>>c;
            cout <<"number"<<'\t'<<"name"<<'\t'<<"age"<<'\t'<<"clas"<<'\t'<<"stat"<<endl;
            cout << "=========================================" << endl;
            for (int i = 0;i < n; i++)
            if (c==student[i].age)
        {

            cout << i+1 << '\t' <<student[i].name << '\t' <<student[i].age  << '\t' << student[i].clas<< '\t' << student[i].stat << endl;

        }}
        if (b=="clas"){
            cout<<"clas:"<<'\t'<<endl;
            int c;
            cin>>c;
            cout <<"number"<<'\t'<<"name"<<'\t'<<"age"<<'\t'<<"clas"<<'\t'<<"stat"<<endl;
            cout << "=========================================" << endl;
            for (int i = 0;i < n; i++)
            if (c==student[i].clas)
        {

            cout << i+1 << '\t' <<student[i].name << '\t' <<student[i].age  << '\t' << student[i].clas<< '\t' << student[i].stat << endl;

        }}
        if (b=="stat"){
            cout<<"stat:"<<'\t'<<endl;
            int c;
            cin>>c;
            cout <<"number"<<'\t'<<"name"<<'\t'<<"age"<<'\t'<<"clas"<<'\t'<<"stat"<<endl;
            cout << "=========================================" << endl;
            for (int i = 0;i < n; i++)
            if (c==student[i].stat)
        {

            cout << i+1 << '\t' <<student[i].name << '\t' <<student[i].age  << '\t' << student[i].clas<< '\t' << student[i].stat << endl;

        }}



    }



    if(a=="redact"){

            cout<<"number:";
            cin>>t;
            cout<<"name: ";
            cin>>student[t-1].name;
            cout<<"age: ";
            cin>>student[t-1].age;
            cout<<"clas: ";
            cin>>student[t-1].clas;
            cout<<"stat: ";
            cin>>student[t-1].stat;
    }}

    return 0;
}
