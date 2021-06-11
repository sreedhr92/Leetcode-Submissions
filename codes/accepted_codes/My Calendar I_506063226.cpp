class MyCalendar {
public:
    unordered_map<int,int> hash;
    MyCalendar() {

    }
    bool book(int start, int end) {
        for(auto [e,s]:hash)
            if(start<e and end>s) return false;
        hash[end]=start;
        return true;
    }
};
/*
["MyCalendar","book","book","book","book","book","book","book","book","book","book"]
[[],[47,50],[33,41],[39,45],[33,42],[25,32],[26,35],[19,25],[3,8],[8,13],[18,27]]
["MyCalendar","book","book","book"]
[[],[10,20],[15,25],[0,50]]
*/

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */