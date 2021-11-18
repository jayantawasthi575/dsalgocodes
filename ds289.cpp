queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    stack<int> tp;
    int i=0;
    while(i<k&&!q.empty())
    {
        tp.push(q.front());
        q.pop();
        i++;
    }
    queue<int> qp;
    while(!tp.empty())
    {
        qp.push(tp.top());
        tp.pop();
    }
    while(!q.empty())
    {
        qp.push(q.front());
        q.pop();
    }
    return qp;
}