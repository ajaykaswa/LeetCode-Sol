class Solution {
public:
    string maximumTime(string time) {
        string s="";
        if(time[0]=='?'&&time[1]=='?') s+="23";
        else if(time[0]=='2'&&time[1]=='?') s+="23";
        else if((time[0]=='1')&&time[1]=='?') s+="19";
        else if(time[0]=='0'&&time[1]=='?') s+="09";
        else if(time[0]=='?'&&time[1]!='?') {
            if(time[1]<='3'){
            s+="2";
            s+=time[1];
            }
            else {
                s+="1";
            s+=time[1];
            }
        }
        else {
            s+=time[0];
            s+=time[1];
        }
        s+=":";
        
        if(time[3]=='?'&&time[4]=='?') s+="59";
        else if(time[3]=='?'&&time[4]!='?'){
            s+="5";
            s+=time[4];
        }
        else if(time[3]!='?'&&time[4]=='?'){
            s+=time[3];
             s+="9";
        }
        else if(time[3]!='?'&&time[4]!='?'){
            s+=time[3];
            s+=time[4];
        };
    
        return s;
    }
};