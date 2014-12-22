#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;
class UsersInRoles
{
    int userID;
    int roleID;
public:
    int roles[2];
    UsersInRoles()
    {}

    UsersInRoles(int userid, int roleid)
    {
        userID = userid;
        roleID = roleid;
    }

    UsersInRoles(int userid)
    {
        userID=userid;
    }

    void setUserId(int userID);

    int getUserId()
    {
        return userID;
    }

    void setRoleID(int roleID);
    int getRoleId()
    {
        return roleID;
    }
    void printInfo(int userID,int roleID)
    {
        cout<<"UserID= " <<userID << "RoleID= " << roleID<<endl;
    }
};
int main()
{
    int userID;
    int roleID;
    UsersInRoles roles[2];
    for(int i=0; i<2; i++)
    {
        cout<<"Vuvedete UserID \n";
        cin>>userID;
        cout<<"Vuvedete RoleID \n";
        cin>>roleID;
        UsersInRoles temp(userID,roleID);
        roles[i]=temp;
        cout<<"---------------\n"<<endl;

    }
    cout<<"Information for the first user!\n";
    cout<<"ID: "<<roles[0].getUserId()<<endl;
    cout<<"Role ID: "<<roles[0].getRoleId()<<endl;
    cout<<"--------------------------"<<endl;
    cout<<"\nInformation for the second user!\n";
    cout<<"ID: "<<roles[1].getUserId()<<endl;
    cout<<"Role ID: "<<roles[1].getRoleId()<<endl;
    return 0;
}
