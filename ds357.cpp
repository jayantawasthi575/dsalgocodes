class Solution {
  public:
    int x;
    int y;
    int distSq(Solution p,Solution q)
    {
        return (p.x-q.x)*(p.x-q.x)+(p.y-q.y)*(p.y-q.y);
    }
    string isSquare(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
        // code here
        Solution p1={x1,y1},p2={x2,y2},p3={x3,y3},p4={x4,y4};
        int d2=distSq(p1,p2);
        int d3=distSq(p1,p3);
        int d4=distSq(p1,p4);
        if(d2==0||d3==0||d4==0)
        return "No";
        if (d2 == d3 && 2 * d2 == d4
        && 2 * distSq(p2, p4) == distSq(p2, p3)) {
        return "Yes";
        }
        if (d3 == d4 && 2 * d3 == d2
        && 2 * distSq(p3, p2) == distSq(p3, p4)) {
        return "Yes";
        }
        if (d2 == d4 && 2 * d2 == d3
            && 2 * distSq(p2, p3) == distSq(p2, p4)) {
            return "Yes";
        }
     
        return "No";
    }
};