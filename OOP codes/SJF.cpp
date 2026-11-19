#include <iostream>
using namespace std;
 
int main() {
    int n, at[20], bt[20], ct[20], tat[20], wt[20];
    bool done[20] = {false};
 
    cout << "Enter number of processes: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "P" << i + 1 << " arrival time and burst time: ";
        cin >> at[i] >> bt[i];
    }
 
    int time = 0, completed = 0;
    while (completed < n) {
        // Step 1: among arrived & unfinished processes, find smallest burst time
        int idx = -1;
        for (int i = 0; i < n; i++) {
            if (!done[i] && at[i] <= time) {
                if (idx == -1 || bt[i] < bt[idx])
                    idx = i;
            }
        }
 
        // Step 2: nobody has arrived yet -> CPU idle, move clock by 1
        if (idx == -1) {
            time++;
            continue;
        }
 
        // Step 3: run the chosen process completely
        time = time + bt[idx];
        ct[idx]  = time;
        tat[idx] = ct[idx] - at[idx];
        wt[idx]  = tat[idx] - bt[idx];
        done[idx] = true;
        completed++;
    }
 
    float totalTat = 0, totalWt = 0;
    cout << "\nProcess\tAT\tBT\tCT\tTAT\tWT\n";
    for (int i = 0; i < n; i++) {
        cout << "P" << i + 1 << "\t" << at[i] << "\t" << bt[i] << "\t"
             << ct[i] << "\t" << tat[i] << "\t" << wt[i] << endl;
        totalTat += tat[i];
        totalWt  += wt[i];
    }
    cout << "Average TAT = " << totalTat / n << endl;
    cout << "Average WT  = " << totalWt / n << endl;
 
    return 0;
}
