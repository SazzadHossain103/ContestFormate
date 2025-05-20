#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define maximum INT_MIN
#define minimum INT_MAX
#define fr for(int i=0; i<n; i++)
#define frj for(int j=0; i<m; i++)
#define vp vector<pair<int,int>>
#define srt(v) sort(v.begin(),v.end())
#define srt(s) sort(s.begin(),s.end())
#define rev(v) reverse(v.begin(),v.end())
#define rev(s) reverse(s.begin(),s.end())
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;

void solve(){

    




}


int main()
{
    int t;cin>>t;
    while(t--){
        
        
        
        
    }



    return 0;

}



*************************String*************************

    string s;
    cin>>s;
    getline(cin,s);// space soho input
    cout<<s<<endl;
    
    string s="Sazad";
    s.insert(s.begin()+2,1,'z'); // s.insert(s.begin()+index, jotobar, je char insert kobo)
    cout<<s<<endl;

    int len=s.size();
    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    s.erase(s.begin()+2);
    s.pop_back();// ses r dik thika akta char delete kore
    s.push_back('d');// ses r dike akta char add kore

    string a;
    a=s.substr(0,3);// suru and ses index

    for(int i=0; i<s.size(); i++)
    {
        char c;
        c=toupper(s[i]); //tolower(s[i]);
        cout<<c;
    }

    istringstream stm(s); // akta string e joto gula word thake sob gula alada kore
    string w;
    while(stm>>w)cout<<w<<endl; //alada word gula print


********************Number to string to number*****************

int num=stoi(s);cout<<num<<endl;// use libaray function stirng to num
    /*
    int n=0;
    for(int i=0; i<s.size(); i++)
    {
        int x=s[i]-'0';
        n=(n*10)+x;
    }
    cout<<n<<endl;
    */
    int n2;cin>>n2;
    string s1=to_string(n2); //use library function num to string
    cout<<s1<<endl;
    string s3=s1;
    reverse(s3.begin(),s3.end());
    if(s1==s3)cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    /*
    string s2;
    while(n2>0)
    {
        int r=n2%10;
        char c=r+'0';
        s2+=c;
        n2/=10;
    }

*************permutation********

    string s;
    cin>>s;
    while(next_permutation(s.begin(),s.end()))
    {
        cout<<s<<endl;
    }
    vector<int>v={1,2,3,4};
    while(next_permutation(v.begin(),v.end()))
    {
        for(int i=0; i<v.size(); i++)cout<<v[i]<<" ";
        cout<<endl;
    }
    */
    //pblm
    string s;
    cin>>s;
    set<string>st;
    sort(s.begin(),s.end());
    st.insert(s);
    while(next_permutation(s.begin(),s.end()))
    {
        st.insert(s);
    }
    cout<<st.size()<<endl;
    for(auto a : st)cout<<a<<endl;



********Sliding window******
    
    string s;cin>>s;
    string t;cin>>t;
    int a=0;
    string c;
    for(int i=0; i<t.size(); i++)
    {
        c+=s[i];
    }
    if(c==t)a++;
    for(int i=t.size(); i<s.size(); i++)
    {
        c+=s[i];
        c.erase(c.begin());
        if(c==t)a++;
    }
    cout<<a<<endl;

************************************************************************************************************


****************Number theory*************

****2^n value****
    
    cout<<(1LL<<5)<<endl; // 2^n valu ber kore ( 1LL<<n )
    cout<<(32&31)<<endl;  // 2^n valu hobe ( n&(n-1) )=0 hoy;


*****Sieve********

long long int n=200000000;
bool prime[200000003];
vector<long long int>v;
void sieve()
{
    for(long long int i=4; i<=n; i+=2)prime[i]==1;
    for(long long int i=3; i*i<=n; i+=2)
    {
        if(prime[i]==0)
        {
            for(long long int j=i*i; j<=n; j+=(i*2))
            {
                prime[j]=1;
            }
        }
    }
    long long int sum=2;

    v.push_back(sum);
    for(long long int i=3; i<=n; i+=2)
    {
        if(prime[i]==0){sum+=i; v.push_back(sum);}
    }

}

*************Prime factorization*********

    long long int n,i,j,tmp,cnt=0;
    cin>>n;
    tmp=n;
    set<int>s;

    for( i=2; i*i<=n; i++)
    {
        while(tmp%i==0)
        {
            tmp/=i;
            s.insert(i);
        }
    }
    if(tmp>1)s.insert(tmp);


*********Binary Search**********

    int arr[] = { 10, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = sizeof(arr)/ sizeof(arr[0]);
    sort(arr,arr+n);

    int t=110;
    int mid;
    int st=0,en=n,f=0,idx;
    while(st<=en)
    {
        mid=st+(en-st)/2;
        if(arr[mid]==t){f=1; idx=mid;}
        if(arr[mid]<t)st=mid+1;
        else en=mid-1;
    }
    if(f==1)cout<<"found  "<<"index = "<<idx<<endl;
    else cout<<"not found"<<endl;

****************************Vector************************

    vector<int> v; //vector declaration
    v.push_back(1);// value assin
    v.push_back(20);
    v.push_back(3);
    v.push_back(4);

    vector<int> v1= { 10, 5, 8, 9, 6, 7, 3, 4, 2, 0 }; //vector declaration

/* user input vector value
    int n;
    cin>>n;
    for(int i=0; i<n(); i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
*/
/*
    cout<<v[0]<<endl;
    cout<<v.at(0)<<endl;
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<v.front()<<endl;//first value print
    cout<<v.back()<<endl;// last value print
*/

/// delete value:
/*
    //v.clear(); //vector all value delete kore
    cout<<v.size()<<endl; // vector size

    //v.pop_back(); //last value delete kore
    //v.erase(v.begin()+0); // jekono index r value delete kore
    v.erase(v.begin()+2,v.end()); // delete value (ak index theke onno index projonto)
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //v.empty(); // vector kali naki check kore
*/

/// adding value:
/*
    //v.insert(v.begin(),1);// first index value add
    //v.insert(v.begin()+1,1);// jekono index value add
    v.insert(v.begin()+2,3,1);// joto bar add korte chai
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
*/

///max valu vector: //*max_element (first_index, last_index);
/*
    cout << "\n Max Element = "<< *max_element(a.begin(), a.end());
    cout << "\n Min Element = "<< *min_element(a.begin(), a.end());
*/


/// swaping two vector:
/*
    swap(v,v1);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
**/

/// sort vector:
    sort(v.begin(),v.end());//ascending order
    sort(v.rbegin(),v.rend());//dacending
    sort(v.begin(), v.end(), greater <>());//dacending
    reverse(v.begin(),v.end());//dacending
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

///upper_bound
   
    ll cnt=upper_bound(v.begin(),v.end(),m)-v.begin(); 
    //vector kono valu r last position  r next index print kore in vector
    cout<<cnt<<endl; // kono valu r last position/index jante  use korte pari
    
    auto cnt=upper_bound(v.begin(),v.end(),m); // x thika boro valu ase kina 
    cout<<*cnt<<endl; // thakle boro valu  print kore , na thekle 0 print kore 

///lower_bound
    
    ll cnt=lower_bound(v.begin(),v.end(),m)-v.begin();
    // fast position r ager index print kore
    cout<<cnt<<endl;
    
    auto cnt=lower_bound(v.begin(),v.end(),m);
    // valu thakle oi valu print kore , na thekle oi value thika boro valu print kore , nato 0
    cout<<*cnt<<endl;
    



///vector pair:
    /*
    vector<pair<int,int>>m;
    m.push_back({2,1});
    m.push_back({8,2});
    m.push_back({3,3});
    m.push_back({3,4});

    int arr[] = { 5, 20, 10, 40 };
    int arr1[] = { 30, 60, 20, 50 };
    // Entering values in vector of pairs
    for (int i = 0; i < n; i++)
        m.push_back(make_pair(arr[i], arr1[i]));

    for(auto a:m)cout<<a.first<<" "<<a.second<<endl;

    */

///2D vector:
/*
    vector<vector<int>> vect
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    //print 2D vector nested loop
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }
        cout << endl;
    }

    //print 2D vector itaretor
    for (vector<int> vect1D : vect)
    {
        for (int x : vect1D)
        {
            cout << x << " ";
        }
        cout << endl;
    }
*/


/// iteration:
/*
    vector<int>::iterator it;
    //it=v.begin()+2;
    //cout<<*it<<endl;
    for( it=v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
*/




******************************Map*********************************


    map<int,int>mp,mp3;  //map key sort hoye jay and key onojay kaj kore
    map<int,string>mp1;
    map<string,string>mp2;
    //   key  , value

    mp.insert({1,5});
    mp.insert({2,10});
    mp2.insert({"sazzad","you"});
    mp1[1]="sazzad"; // aivbe valu deya jay
    mp2["you"]="me";

    // map print
    cout<<mp[1]<<endl;
    cout<<mp1.at(1)<<endl;
    string s="sazzad";
    cout<<mp2[s]<<endl;
    cout<<mp2["you"]<<endl;

    for(auto a:mp2)
    {
        cout<<a.first<<" "<<a.second<<endl;   // key r sort hoye print korbe
    }

    cout<<mp.size()<<endl;

    mp2.clear();
    cout<<mp1.size()<<endl;
    cout<<mp1.empty()<<endl;//yes hole 1 print korbe , No hole 0 print korbe
    cout<<mp2.empty()<<endl;

    //mp.erase(1); // erase(key)
    cout<<mp1.count(1)<<endl; //count(key) key ase naki setha khuje ber kore yes=1 no=0
    //cout<<mp1.find(1)<<endl;

    auto b = mp.lower_bound(3); // key juthi thake tahole seti print korbe ,
                                //na theke key thika boro jeti thakbe seti print,
                                // key juthi sob theke boro hoiya jay end k point korbe garbrj value print korbe
    cout<<(*b).first<<" "<<(*b).second<<endl;

    auto it = mp.upper_bound(1); // key thika boro valu ta print kore
    cout<<(*it).first<<" "<<(*it).second<<endl;

    mp=mp3; // akti map ar sob valu ar akti map e neya jay
    mp.swap(mp3);


    multimap<int,int>m4; // aki key onek bar thakte pare
    m4.insert({1,10});
    m4.insert({2,20});
    m4.insert({2,40});
    m4.insert({1,50});

    auto it1 = m4.begin();
    advance(it1,2); // delet korbe first thika je index dlt korte chai
    m4.erase(it1);

    for(auto a : m4)
    {
        cout<<a.first<<" "<<a.second<<endl;
    }




*************************Array**************************

    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = sizeof(arr)/ sizeof(arr[0]);

    cout<<n<<endl;

///sort:
    //sort(arr, arr + n);
    //sort(arr, arr + n, greater<>());//descending order
    //sort(arr + 2, arr + n);// Sort the elements which lies in the range of 2 to (n-1)

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    // Find the maximum element: *max_element (first_index, last_index);
    cout<<"\n Max Element = " << *max_element(arr, arr + n);
    cout<<"\n Max Element = " << *min_element(arr, arr + n)<<endl;

/// swap:
    // array container declaration
    array<int, 4> myarray1{ 1, 2, 3, 4 };
    array<int, 4> myarray2{ 3, 5, 7, 9 };

        // using swap() function to swap elements of arrays
    myarray1.swap(myarray2);

        // printing the first array
    cout<<"myarray1 = ";
    for(auto it=myarray1.begin(); it<myarray1.end(); ++it)
        cout<<*it<<" ";

///array empty:
    if (myarray1.empty()) {
        cout << "True";
    }
    else {
        cout << "False";
    }
/// array size:
    array<int, 5> myarray{ 1, 2, 3, 4, 5 };
    cout << myarray.max_size();






// 0/1 knapsak 
    fast();
    int t,cnt=1;
    cin>>t;
    while(t--){
        int n;
        int c;
        cin>>n>>c;
        vector<int>w,p;
        int k[n+1][c+1];

        for(int i=0; i<n; i++){
            int a,b;
            cin>>a>>b;
            w.pb(a);
            p.pb(b);
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<=c; j++){
                if(i==0 || j==0) k[i][j]=0;
                else if(w[i]>j)k[i][j]=k[i-1][j];
                else k[i][j]=max(k[i-1][j] ,k[i-1][j-w[i]] + p[i]);
            }
        }
        cout<<"Case "<<cnt<<": "<<k[n-1][c]<<endl;
        cnt++;

    }



//difference array


void solve(){
    int n; cin>>n;
    vector<int>v,v1(n+1),v2;
    for(int i=0; i<n; i++){
        int a; cin>>a; v.pb(a);
    }
    int q; cin>>q;
    for(int i=0; i<q; i++){
        int l,r,va; cin>>l>>r>>va;
        v1[l]+=va;
        v1[r+1]-=va;
    }
    for(int i=1; i<n; i++)v1[i]+=v1[i-1];
    for(int i=0; i<n; i++)v2.pb(v[i]+v1[i]);
    for(auto a: v2)cout<<a<<" ";
    cout<<endl;

}



//2D prefix sum


void solve(){
    int n,m; cin>>n>>m;
    vector<vector<int>>v,v2(n,vector<int>(m));
    for(int i=0; i<n; i++){
        vector<int>t;
        for(int j=0; j<m; j++){
            int a; cin>>a; t.pb(a);
        }
        v.pb(t);
    }

    v2[0][0]=v[0][0];
    for(int i=1; i<n; i++)v2[0][i]=v2[0][i-1]+v[0][i];
    for(int i=1; i<m; i++)v2[i][0]=v2[i-1][0]+v[i][0];

    for(int i=1; i<n; i++){
        for(int j=1; j<m; j++){
            v2[i][j]=v2[i][j-1]+v2[i-1][j]+v[i][j]-v2[i-1][j-1];
        }
    }
    cout<<"prefix sum"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<v2[i][j]<<" ";
        }
        cout<<endl;
    }

}
