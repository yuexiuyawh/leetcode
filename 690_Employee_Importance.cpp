/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        int sum=0;
        unordered_map<int,int> m;
        for(int i=0;i!=employees.size();++i)
            m[employees[i]->id]=i;
        stack<int> s;  //逻辑上应该用queue更直观
        s.push(id);
        while(s.size())
        {
            int i=s.top();
            s.pop();
            sum+=employees[m[i]]->importance;
            for(int j:employees[m[i]]->subordinates)
                s.push(j);
        }
        return sum;
    }
};
