#include<bits/stdc++.h>
using namespace std;
int main(){
int p, r;
bool test;
vector < int > avl;

//----------------------------enter p r---------------------------------
system("clear");

cout << "Enter the number of processes in the system: ";
cin >> p;
cout << "Enter the number of recourses: ";
cin >> r;


//test
int allocation[p][r];
int max[p][r];
int need[p][r];
int aval[r];
int state[p];
test = true;
//test
//---------------------enter alloc---
system("clear");

cout << "\nEnter the allocation " << endl;
if (r == 1)
{
  cout << "\t    A \n \t ";
}
else if (r == 2)
{
    cout << "\t    A B \n \t ";
}
else if (r == 3)
{
    cout << "\t    A B C \n \t ";
}
else if (r == 4)
{
    cout << "\t    A B C D \n \t ";
}
for (int i = 0; i < p; i++)
{
    cout << endl << "\t" << "P" << i << ": ";
    for (int j = 0; j < r; j++)
    {
        cin >> allocation[i][j];
        cout << " ";
    }
}
system("clear");
//-----------------------------entet max----------------
cout << "\nEnter the MAX" << endl;
if (r == 1)
    cout << "\t    A \n \t ";
else if (r == 2)
    cout << "\t    A B \n \t ";
else if (r == 3)
    cout << "\t    A B C\n \t ";
else if (r == 4)
    cout << "\t    A B C D\n \t ";
for (int i = 0; i < p; i++)
{
    cout << endl << "\t" << "P" << i << ": ";
    for (int j = 0; j < r; j++)
    {
        cin >> max[i][j];
        need[i][j] = max[i][j] - allocation[i][j];
    }
}
system("clear");
//-----------------enter ava--------------
cout << "\nEnter the avaliable number : " << endl;
cout<<"\tAvail: ";
for (int i = 0; i < r; i++)
{
    cin >> aval[i];
    cout << " ";
}
//-----------------------------------COUT---------------------
system("clear");
system("clear");
cout << "There are " << p << " processes in the system." << endl;
cout << "There are " << r << " resource types." << endl << endl;
//----------------------------------cout allocation---------------
cout << " The allocation Matrix : " << endl << endl;
if (r == 1)
    cout << "\t    A \n \t ";
else if (r == 2)
    cout << "\t    A B \n \t ";
else if (r == 3)
    cout << "\t    A B C\n \t ";
else if (r == 4)
    cout << "\t    A B C D\n \t ";
for (int i = 0; i < p; i++)
{
    cout << endl << "\tP" << i << ": ";
    for (int j = 0; j < r; j++)
    {
        cout << allocation[i][j] << " ";
    }
    cout << endl;
}
//----------------------------------cout max---------------
cout << endl << " The Max Matrix is...  " << endl << endl;
if (r == 1)
    cout << "\t    A \n \t ";
else if (r == 2)
    cout << "\t    A B \n \t ";
else if (r == 3)
    cout << "\t    A B C\n \t ";
else if (r == 4)
    cout << "\t    A B C D\n \t ";
for (int i = 0; i < p; i++)
{
    cout << endl << "\tP" << i << ": ";
    for (int j = 0; j < r; j++)
    {
        cout << max[i][j] << " ";
    }
    cout << endl;
}
//-------------------------cout need-------------------------------------------
cout << endl << " The Need Matrix is...  " << endl << endl;
for(int i = 0; i < p; i++)
{
  for(int j = 0; j < r; j++)
  {
    need[i][j] = max[i][j] - allocation[i][j];
  }
}
if (r == 1)
    cout << "\t    A \n \t ";
else if (r == 2)
    cout << "\t    A B \n \t ";
else if (r == 3)
    cout << "\t    A B C\n \t ";
else if (r == 4)
    cout << "\t    A B C D\n \t ";
for (int i = 0; i < p; i++)
{
    cout << endl << "\tP" << i << ": ";
    for (int j = 0; j < r; j++)
    {
        cout << need[i][j] << " ";
    }
    cout << endl;
}
//----------------------------- cout aval ---------------------
cout << endl << "The Available Vector is..." << endl << endl;
cout<<"\tAvail: ";

for (int i = 0; i < r; i++)
{
    cout << aval[i] << " ";
}
cout<<endl;
//--------SAFESTATE----------SAFESTATE----------SAFESTATE-------------------
  int count = p;
  cout<<endl;
  cout<<"Safe sequence: ";
  do{
    for(int loop_var = 0; loop_var < p; loop_var++)
    {
      test = false;
        for (int j = 0; j < r; j++) {
          if(state[loop_var] == true)
          {
            break;
          }
          if(need[loop_var][j] > aval[j])
          {
            test = false;
            state[loop_var] = false;
            break;
          }
          else
          {
            test = true;
          }
      }

      if((test))
      {
        count--;
        state[loop_var] = true;
        for(int sb = 0; sb < r; sb++)
        {
          aval[sb] = aval[sb] + allocation[loop_var][sb];
        }
        if(count == 0)
        {
          cout<<"P"<<loop_var<<" ";
        }
        else if(count > 0)
        {
          cout<<"P"<<loop_var<<"-->";
        }
      }
    }
  }while(count != 0);
  cout<<endl;

//--------SAFESTATE----------SAFESTATE----------SAFESTATE-------------------
cout<<endl;
cout<<"The new available vector is: ";
for(int i = 0; i < r; i++)
{
  cout<<aval[i]<<" ";
}
cout << endl << endl;
return 0;}