class Rectangle{
private:
    double xlen;
    double yhig;
    int *weight;
    bool isWeightOwn;
public:

    Rectangle(){
        xlen = 0;
        yhig = 0;
        weight = 0;
        isWeightOwn = false;
    }

    // this isWeightOwn a constructor 
    Rectangle(double x, double y){
        xlen = x;
        yhig = y;
        weight = 0;
        isWeightOwn = false;
    }

    Rectangle(){
        xlen = 0;
        yhig = 0;
        weight = 0;
        isWeightOwn = false;
    }

     Rectangle(Rectangle &r){
         xlen = r.xlen;
         yhig = r.yhig;
         weight= new int;
         *weight= *r.getWeight();
        isWeightOwn = true;
        //  printf("%i",getWeight()[3]);
     }

    double area(){
        return xlen * yhig;
    }
    double getLength(){
        return xlen;
    } 
    double getHight(){
        return yhig;
    }
    void setWeight(int *c){
        isWeightOwn = true;
        weight = c;
    }

    int *getWeight(){
        return weight;
    }

   

    ~Rectangle(){
        if (isWeightOwn)
            delete weight;
    }
};
