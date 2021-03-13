class Rectangle{
private:
    double xlen;
    double yhig;
    int *weight;
public:

    // this is a constructor 
    Rectangle(double x, double y){
        xlen = x;
        yhig = y;
        weight = 0;
    }

    Rectangle(){
        xlen = 0;
        yhig = 0;
        weight = 0;
    }

     Rectangle(Rectangle &r){
         xlen = r.xlen;
         yhig = r.yhig;
         weight= new int;
         *weight= *r.getWeight();

         printf("%i",getWeight()[3]);
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
        weight = c;
    }

    int *getWeight(){
        return weight;
    }

   

    ~Rectangle(){
        delete weight;
    }
};
