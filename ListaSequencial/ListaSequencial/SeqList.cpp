#include <iostream>
#include "SeqList.h"
using namespace std;


SeqList:: SeqList(int n){

    // *this->vec = *vec;
    // this->size_vec = size_vec;
    // this->capacity_vec = capacity_vec;

    if(n > 0) { 
        vec = new int [n];
        capacity_vec = n;
        size_vec = 0;
    }
}

SeqList:: ~SeqList(){
    if(vec != nullptr){
        delete[] vec;
    }
}   

bool SeqList::add(int x){
    if(isFull()){
        return false;
    }
    vec[size_vec] = x;
    size_vec ++;
    return true;
}

bool SeqList:: remove(int x){
    int aux = search(x);
    if(aux != -1) {
        while (aux <= size_vec -2) {
            vec[aux] = vec[aux + 1];
            aux ++;
        }
        size_vec --;
        return true;
    }
    return false;
}
    
int SeqList:: search(int x){
    for (int i = 0; i < size_vec ; i ++){
        if(vec [ i] == x){
            return i;
        }
    }
    return -1;
}
    
int SeqList:: at(int k){
    return vec[k];
}

int SeqList:: size(){
    return size_vec;
}

bool SeqList:: isFull(){
    if (size_vec == capacity_vec){
        return true;
    }
    return false;
}
    
void SeqList:: clear(){
    size_vec = 0;
}

std::string SeqList:: toString(){                              //aqui teve modificacao no escopo da funcao
    cout << "[";
    for ( int i = 0; i < size_vec; i ++){
        cout << vec[i] << ","; 
    }        
    cout << "]";
}

//a partir daqui começa a implementacao 

bool SeqList:: replaceAt(int x, int k){
    for(int i = 0; i < size(); i++){
        if(i == k){
            if((0 <= k) && (k <= size() - 1)){
                vec[i] = x;
                return true;
            }
        }
    }
    return false;

    // if((0 <= k) && (k <= size() - 1)){
    //     for(int i = 0; i < size(); i++){
    //         if(i == k){
    //             vec[i] = x;
    //             return true;
    //         }
    //     }
    // }
}

bool SeqList:: removeAt(int k){
    for(int i = 0; i < size(); i++){
        if(i == k)
            if(((0 <= k) && (k <= size())) && size() < capacity_vec){
                remove(vec[i]);
                size_vec--;
                return true;
            }
    }
    return false;
}

bool SeqList:: insertAt(int x, int k){
    size_vec++;
    for(int i = 0; i < size(); i++){
        if(i == k){
            if(((0 <= k) && (k <= size())) && size() < capacity_vec){
                for(int j = size(); j >= k; j--){
                    vec[j] = vec[j - 1];
                }
                vec[i] = x;
                return true;
            }
        }
    }
    size_vec--;
    return false;
} 

void SeqList:: removeAll(int x){    
    for(int i = 0; i < size() - 1; i++){
        if(vec[i] == x){
            vec[i] = vec[i + 1];
            for(int j = vec[i + 1]; j < size() - 1; j++){
                vec[j] = vec[j + 1];
            }
            size_vec--;
        }
    }
}