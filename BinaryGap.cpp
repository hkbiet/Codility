// you can use includes, for example:
#include <algorithm>
#include<vector>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    int remainder;

    vector<int> binary;

    // Int to Binary Conversion

    while (N)
    {
        remainder = N % 2;
        binary.push_back(remainder);
        N = N / 2 ;
    }
        bool start = false;
    bool end = false;
    int max = -1;
    int count = 0;
    
        for(auto item : binary){
        if (!start && (item==1))
        {
            //cout<<"IN\n";
            start = true;
        }

        if(start && (item == 0)){
            //cout<<"count before = "<<count<<endl;
            count++;
            //cout<<"count after = "<<count<<endl;


        }

        if(start && (item == 1)){
            end = true;
            if(max < count)
                max = count;
            count = 0;
            end = false;

        }
        
    }
    
    return max;
}
