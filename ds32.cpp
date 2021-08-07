vector<int> minAnd2ndMin(int a[], int n) {
    sort(a,a+n);
    vector<int> vect;
    int temp=a[0];
    vect.push_back(a[0]);
    for(int i=1;i<n;i++)
    {
        if(temp!=a[i])
        vect.push_back(a[i]);
    }
    if(vect.size()>1)
    return vect;
    else
    {
        vector<int> vec;
        vec.push_back(-1);
        return vec;
    }
}