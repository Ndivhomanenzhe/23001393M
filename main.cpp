#include <iostream>
#include <String>

using namespace std;

int main()
{
   int age;
   char gender;
    bool like_sports, independent;

    cout<<"Enter your age:";
    cin>>age;
    cout<<"Enter your gender:";
    cin>>gender;
    cout<<"Do you like sports(1 for yes, 0 for no)";
    cin>>like_sports;
    cout<<"Do you like to be independet(1 for yes, 0 for no)";
    cin>>independent;


    if(age>=18){
        if(gender == 'F' && like_sports){
        cout<<"you have found female perfect match"<<endl;
    }
    else if(gender == 'M' && like_sports){
    cout<<"you have found male perfect match"<<endl;
    }
    else if(gender == 'F' && independent){
     cout<<"a female perfect match"<<endl;
    }
    else if(gender == 'M' && independent){
    cout<<"a male perfect match"<<endl;
    }
    else{
        cout<<"Sorry, no perfect match"<<endl;
    }
    }
    else{
        cout<<"Sorry, you need to be at least 18 years old.";
    }

    return 0;
}
