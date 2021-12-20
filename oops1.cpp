            #include<iostream>
            using namespace std;
            class student
            {
                public:
                string name;
                int age;
                bool gender; 
                void printinfo(){
                    cout<<name<<endl;
                
                cout<<gender<<endl;
                
            cout<<age<<endl;


                }
            };
            int main()
            {
            student arr[3];
            for(int i=0;i<3;i++){
                cout<<"name";
                cin>>arr[i].name;
                cout<<"gender";
                cin>>arr[i].gender;
            cout<<"age";
            cin>>arr[i].age;
            }
            for(int i=0;i<3;i++)
            {
                arr[i].printinfo();
            }
            return 0;
            }