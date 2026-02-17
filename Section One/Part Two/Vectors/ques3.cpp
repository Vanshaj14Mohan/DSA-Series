// 3: Find largest sub-array sum using vector and function
#include<iostream>
#include<vector>
using namespace std;

// Done in O(n^3) Complexity
int maxsubArray(vector<int> &vec, int size){
    for(int st =0; st< size; st++){
        for(int end = st; end< size; end++){
            for(int i = st; i<=end; i++){
                cout << vec[i];
            }
            cout << " ";
        }
        cout << endl;
    }

}

int main(){
    vector<int> vec = {1, 2, 3, 4, 5};
    int size = vec.size();
    int res = maxsubArray(vec, size);
    cout << "All sub arrays are: " << res << endl;
    return 0;
}
