#include <iostream>
#include <memory>
using namespace std;

int main(){
    unique_ptr<int[]>buf(new int[10]); //스마트 포인트생성

    for(int i=0; i<10;i++){
        buf[i] = i;
    }

    for(int i =0 ;i<10;i++){
        cout<<buf[i]<<" ";
    }   
    cout <<endl;
    return 0;       //동적 할당 메모리를 삭제 안해도 자동으로 삭제된다!
}
