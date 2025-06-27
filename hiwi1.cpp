#include<iostream>
#include<vector>

int main() {
    int l=0, N, k;
    int sum = 0, max_sum = 0;
    vector<int> A;
    unordered_map<int,int> mpp;
    for(int r=0; r<N; r++) {
        mpp[A[r]]++;
        sum += A[r];
        while(mpp.size()>k and l<r) {
            sum -= A[l];
            mpp[A[l]]--;
            if (mpp[A[l]] == 0) mpp.erase(A[l]);
            l++;
        }
        max_sum = max(max_sum, sum);
    }
    cout<<max_sum<<"";
}