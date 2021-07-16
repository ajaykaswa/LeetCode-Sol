class Cashier {
public:
    unordered_map<int,int> mp;
    int a=0,dist=0,b=0;
    Cashier(int n, int discount, vector<int>& products, vector<int>& prices) {
        for(int i=0;i<products.size();i++){
            mp[products[i]]=prices[i];
        }
        a=n;
        dist=discount;
    }
    
    double getBill(vector<int> product, vector<int> amount) {
        b++;
        double sum=0;
        for(int i=0;i<product.size();i++){
            sum+=mp[product[i]]*amount[i];
        }
        if(b==a){
            b=0;
            sum =sum-(dist*sum)/100;
        }
        return sum;
    }
};

/**
 * Your Cashier object will be instantiated and called as such:
 * Cashier* obj = new Cashier(n, discount, products, prices);
 * double param_1 = obj->getBill(product,amount);
 */