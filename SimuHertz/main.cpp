#include <iostream>

#include <cmath>
#include <cstdlib>
#include <vector>
#include <string>
// Return s the square of x
double sq(double x){
    return x*x;
}
// returns the cube of x
double cb(double x){
    return x*x*x;
}
class vec2{
    public:
        double x,y;
    public:
        vec2(){
            this->x = 0;
            this->y = 0;
        }
        vec2(double val_x, double val_y){
            this->x = val_x;
            this->y = val_y;
        }
        vec2 operator+(const vec2& v){
            return vec2(this->x + v.x, this->y + v.y);
        } 
        void operator+=(const vec2 v){
            this->x = this->x + v.x;
            this->y = this->y + v.y;
        }
        vec2 operator-(const vec2& v){
            return vec2(this->x - v.x, this->y - v.y);
        } 
        void operator-=(const vec2 v){
            this->x = this->x - v.x;
            this->y = this->y - v.y;
        }
        vec2 operator*(const double s){
            return vec2(this->x*s, this->y*s);
        }  
        void operator*=(const double s){
            this->x = this->x*s;
            this->y = this->y*s;
        } 
        double operator*(const vec2 v){//produit scalaire
            return this->x * v.x + this->y * v.y;
        }
        vec2 operator/(const double s){
            return vec2(this->x/s, this->y/s);
        }   
        void print(){
            std::cout<<x<<" "<<y;
        }
};
double RandValAtInterval(double min, double max){
    double scale = rand() / (double) RAND_MAX;
    return min + scale * (max - min);
}

int main(){
    return 0;
}