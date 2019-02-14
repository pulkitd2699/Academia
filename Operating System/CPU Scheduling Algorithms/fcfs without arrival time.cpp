#include <iostream>

using namespace std;

int main()
{
    int bt[10], wt[10], tat[10],n,i;
    int avgwt=0.0,avgtat=0.0;
    cout<<"Enter the no. of process\n";
    cin>>n;
    cout<<"Enter the burst time of the process\n";
    for(i=0;i<n;i++){
        cin>>bt[i];
    }
    wt[0]=0;
    tat[0]=bt[0];
    for(i=1;i<n;i++){
        wt[i] = wt[i-1] + bt[i-1];
        tat[i] = wt[i] + bt[i];
        avgwt+=wt[i];
        avgtat+=tat[i];
    }
    avgwt=avgwt/n;
    avgtat=(avgtat + bt[0])/n;
    cout<<endl;
    cout<<"Process\t Burst Time\t Waiting Time\t Turn Around Time\n";
    for(i=0;i<n;i++){
        cout<<i<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i];
        cout<<endl;
    }
    cout<<"Average Waiting Time is : "<< avgwt<<endl;
    cout<<"Average Turn Around Time is : "<<avgtat;
    return 0;
}