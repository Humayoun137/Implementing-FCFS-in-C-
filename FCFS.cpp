#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<< "Enter How many process:";
    cin>>n;

    int Brusttime[n];
    for(int i=0; i<n; i++)
    {
        cout<< "Enter Brusttime for P"<<i+1<< ":";
        cin>>Brusttime[i];
    }

    int waitingtime;
    int totalwait=0;
    int tAtime=0;
    cout<< "Process\t\t\tBursttime\t\tTurnAroundTime\t\tWaitingtime"<<endl;
    for(int i=0; i<n; i++)
    {
        tAtime +=Brusttime[i];
       waitingtime=(tAtime-Brusttime[i]);
       totalwait +=waitingtime;
        cout<<"P"<<i+1<<"\t\t\t"<<Brusttime[i]<<"\t\t\t"<<tAtime<<"\t\t\t"<<waitingtime<<endl;
    }
    cout<< "Total Waiting Time ="<<totalwait<<endl;
    float avgwait = totalwait /n;
    cout<< "Avg Waiting Time ="<<avgwait;
}

