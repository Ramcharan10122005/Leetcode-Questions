class MyCalendarTwo {

    private:

    set<pair<int, int>> overallBookings;
    set<pair<int, int>> doubleBookings;

    bool isOverlapping(int start1, int end1, int start2, int end2){
        return max(start1, start2) < min(end1, end2);
    }

    pair<int, int> overlappedRegion(int start1, int end1, int start2, int end2){
        return {max(start1, start2), min(end1, end2)};
    }
    
    public:
    
    MyCalendarTwo() {}
    
    bool book(int start, int end) {

        // Check for triple booking
        for(auto [st, en] : doubleBookings){
            if(isOverlapping(start, end, st, en)){
                return false;
            }
        }

        // Check for double booking
        for(auto [st, en] : overallBookings){
            if(isOverlapping(start, end, st, en)){
                doubleBookings.insert(overlappedRegion(start, end, st, en));
            }
        }

        overallBookings.insert({start, end});
        return true;

    }
};