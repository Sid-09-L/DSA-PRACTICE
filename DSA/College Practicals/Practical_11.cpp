#include<iostream>
#include<string>
using namespace std;

class student{
    public:
        int roll;
        string name;
        float marks;
        student *left;
        student* right;

};
student * createstudent(int roll,string name,float marks){
    student* newnode=new student();

    newnode->roll=roll;
    newnode->name=name;
    newnode->marks=marks;
    newnode->left=newnode->right=NULL;

    return newnode;
}
student *insert(student*root,int roll,string name,float marks){
    if(root==NULL){
        return createstudent(roll,name,marks);
    }
    if(roll<root->roll){
        root->left=insert(root->left,roll,name,marks);
    }
    else if(roll>root->roll){
        root->right=insert(root->right,roll,name,marks);
    }
    else{
        cout<<"Duplicate Roll Number "<<endl;
    }
    return root;
}
void search(student*root,int key){
    if(root==NULL){
        cout<<"Student not found";
        return;
    }
    if(key==root->roll){
        cout<<"Student found"<<endl;
    }
    else if(key<root->roll){
        search(root->left,key);
    }
    else{
        search(root->right,key);
    }
}
void display(student * root){
    if(root==NULL){
        return;
    }
    display(root->left);

    cout<<"Roll No:"<<root->roll<<endl;
    cout<<"Name:"<<root->name<<endl;
    cout<<"Marks:"<<root->marks<<endl;
    cout<<endl;

    display(root->right);
}
student* deletestudent(student* root,int key){
    if(root==NULL){
        return 0;
    }
    if(key<root->roll){
        root->left=deletestudent(root->left,key);
    }
    else if(key>root->roll){
        root->right=deletestudent(root->right,key);
    }
    else{
        if(root->left==NULL){
            student*temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            student*temp=root->left;
            delete root;
            return temp;
        }
        else{
            student*temp=root->left;

            while(temp->right!=NULL){
                temp=temp->right;
            }
            root->roll = temp->roll;
            root->name = temp->name;
            root->marks = temp->marks;

            root->left = deletestudent(root->left, temp->roll);
        }
    }
    return root;
}
int main(){
    student *root=NULL;
    int choice,roll;
    string name;
    float marks;

    do{
        cout << "\n--- Student Record Management System ---" << endl;
        cout << "1. Insert Student" << endl;
        cout << "2. Display Students" << endl;
        cout << "3. Delete Student" << endl;
        cout << "4. Exit" << endl;

        cout<<"Enter Choice:";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Enter Roll No:";
                cin>>roll;

                cout << "Enter Name: ";
                cin >>name;

                cout << "Enter Marks: ";
                cin >> marks;

                root = insert(root, roll, name, marks);
                break;

            case 2:
                
                display(root);
                break;

            case 3:
                cout << "Enter Roll Number to delete: ";
                cin >> roll;

                root = deletestudent(root, roll);
                break;
            
            case 4:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    }while(choice!=5);

    return 0;
}