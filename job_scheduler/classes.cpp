#include<bits/stdc++.h>
using namespace std;

class Isp
{   
public:
    string name;
    int status;
    int capacity;
};

class Isps : public Isp
{
public:
    vector<Isp> company;
    void restartServers();
    void setStatus(vector<int>);
};
