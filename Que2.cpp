 //print all the number form 1 to 100 which is divisible by 3
 #include<iostream>
 using namespace std;
 int main(){
    // for(int i= 1;i<=100;i++){
    //     if(i%3==0){
    //         cout<<i<<endl;
    //     }
    // }

    for( int i= 3;i<=100;i+=3){
        cout<<i<<" ";
    }
 }