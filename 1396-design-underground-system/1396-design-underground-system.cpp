class UndergroundSystem {
public:
    unordered_map<int,pair<string,int>>mp1;
    unordered_map<string,pair<int,int>>mp2;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        mp1[id]={stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        string g = mp1[id].first;
        string y = g+'-'+stationName;
        int new_time = t - mp1[id].second;
        if(mp2.find(y)==mp2.end())
        {
            mp2[y]={new_time,1};
        }
        else
        {
            mp2[y].first+=new_time;
            mp2[y].second++;
        }
        mp1.erase(id);
    }
    
    double getAverageTime(string startStation, string endStation) {
        string j = startStation+'-'+endStation;
        int sum =mp2[j].first;
        int total = mp2[j].second;
        double ans = (double)sum/(double)total;
        return ans;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */