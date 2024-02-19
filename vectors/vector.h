//creating a header file that can be icluded in other files as well
template<typename T>//T is generic which can be defined later

class Vector{
//Data members 
    T *arr;
T cs;
T ms;


//constructor,destructor,methods
public:
  Vector(){
    cs =0;
    ms = 1;
    arr = new T[ms];
}

void push_back(T d){
    //two cases - if vector is full we need to copy it to new address with double memory.
    //if array is not full then we need add to next index onlr

    if(cs==ms){
        //create a new array with double capacity and delete old one
        T *oldArr = arr;
        ms = 2*ms;
        arr = new T [ms];
        for(int i=0;i<cs;i++){
             arr[i]=oldArr[i];

        }
        //delete
        delete [] oldArr;
    }

    arr[cs]=d;
    cs++;
}

void pop_back(T d){
 if(cs>=0){
    cs--;
 }
}
//front,back,at(i),[]
T front(){
    return arr[0];
}
T back (){
    return arr[cs-1];
}
T size(){
    return cs;
}
T capacity(){
    return ms;
}
T at(int i){
    return arr[i];
}
//opearor overloading

// int operator[](int i ){
//     return arr[i];
// }
};