#include<bits/stdc++.h>
#include<math.h>
using namespace std;



//partial correct


vector<long long> solve (vector<int> a, vector<long long int> r, vector<long long int> l) {
    vector<long long>result;
    long long int summ=accumulate(a.begin(),a.end(),0);
    long long int y,j,q,rem,ans,i,m;
    m=a.size();
    for(y=0;y<l.size();y++)
    {
         j=(l[y]-1)%m;
         q=r[y]-l[y]+1;
        rem=q/m;
        ans=(rem*summ)%1000000007;
        rem=q%m;
        for(i=0;i<rem;i++)
        {
            ans+=(a[(i+j)%m])%1000000007;
            ans=ans%1000000007;
        }
         ans=ans%1000000007;
        result.push_back(ans);
    }
    return result;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for(int i_A=0; i_A<N; i_A++)
        {
        	cin >> A[i_A];
        }
        int Q;
        cin >> Q;
        vector<long long int> L(Q);
        for(int i_L=0; i_L<Q; i_L++)
        {
        	cin >> L[i_L];
        }
        vector<long long int> R(Q);
        for(int i_R=0; i_R<Q; i_R++)
        {
        	cin >> R[i_R];
        }

        vector<long long> out_;
        out_ = solve(A, R, L);
        cout << out_[0];
        for(int i_out_=1; i_out_<out_.size(); i_out_++)
        {
        	cout << " " << out_[i_out_];
        }
        cout << "\n";
    }
}
