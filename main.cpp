//Class collaboration for learning how to use vectors
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> bpm;
    vector <int> steps;
    vector <int> calories;
    int heartRate;
    int highest = -99;
    do
    {
        cout<<"Please enter heart rate reading (in beats per minute, or -1 to stop): ";
        cin>>heartRate;
        bpm.push_back(heartRate);
    }while(heartRate != -1);
    bpm.pop_back();  //to remove the -1 value for stopping the loop
     
//   int length = bpm.size();

    cout<<"BPM is currently size "<<bpm.size()<<endl; //instead of using length
    cout<<"The last item in BPM is..."<<bpm[ bpm.size()-1 ]<<endl;
    cout<<"The items in BPM are..."<<endl;
    for(int i = 0; i < bpm.size(); i++)
    {
        if( bpm[i] > highest )
        {
          highest = bpm[i];
        }
        cout<<bpm[i]<<endl;
    }
    cout<<"The highest BPM is "<<highest<<endl;

    return 0;
}
