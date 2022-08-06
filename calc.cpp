#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    for (int i = 0; i < 4; i++)
    {
        /* code */
    }
    
    int BP1;
    cin>>BP1;

    float da=BP1*0.03;

    float HRA=BP1*0.12;

    float MA=500;

    float HT=400;

    float GS=BP1+da+HRA+MA+HT;

    float PF=BP1*0.06;

    float PTAX=200;

    float GI=60;

    float TD=PF+PTAX+GI;

    float NS=GS-TD;

    // cout<<"month\n";
    // cout<<BP1<<"\n";
    // cout<<da<<"\n";
    // cout<<MA<<"\n";
    // cout<<HT<<"\n";
    // cout<<GS<<"\n";
    // cout<<PF<<"\n";
    // cout<<PTAX<<"\n";
    // cout<<GI<<"\n";
    // cout<<TD<<"\n";
    // cout<<NS<<"\n";
    // cout<<"\n";

    cout<<"<td>month</td>"<<"\n";
    cout<<"<td>"<<BP1<<"</td>"<<"\n";
    cout<<"<td>"<<da<<"</td>"<<"\n";
    cout<<"<td>"<<HRA<<"</td>"<<"\n";
    cout<<"<td>"<<MA<<"</td>"<<"\n";
    cout<<"<td>"<<HT<<"</td>"<<"\n";
    cout<<"<td>"<<GS<<"</td>"<<"\n";
    cout<<"<td>"<<PF<<"</td>"<<"\n";
    cout<<"<td>"<<PTAX<<"</td>"<<"\n";
    cout<<"<td>"<<GI<<"</td>"<<"\n";
    cout<<"<td>"<<TD<<"</td>"<<"\n";
    cout<<"<td>"<<NS<<"</td>"<<"\n";

    int BP2;
    cin>>BP2;

    float da=BP2*0.03;

    float HRA=BP2*0.12;

    float MA=500;

    float HT=400;

    float GS=BP2+da+HRA+MA+HT;

    float PF=BP2*0.06;

    float PTAX=200;

    float GI=60;

    float TD=PF+PTAX+GI;

    float NS=GS-TD;

    

    cout<<"<td>month</td>"<<"\n";
    cout<<"<td>"<<BP2<<"</td>"<<"\n";
    cout<<"<td>"<<da<<"</td>"<<"\n";
    cout<<"<td>"<<HRA<<"</td>"<<"\n";
    cout<<"<td>"<<MA<<"</td>"<<"\n";
    cout<<"<td>"<<HT<<"</td>"<<"\n";
    cout<<"<td>"<<GS<<"</td>"<<"\n";
    cout<<"<td>"<<PF<<"</td>"<<"\n";
    cout<<"<td>"<<PTAX<<"</td>"<<"\n";
    cout<<"<td>"<<GI<<"</td>"<<"\n";
    cout<<"<td>"<<TD<<"</td>"<<"\n";
    cout<<"<td>"<<NS<<"</td>"<<"\n";

    return 0;
}