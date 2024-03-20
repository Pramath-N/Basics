#include<bits/stdc++.h>

class OpenAdress{
    int cap,size;
    std::vector<int> table;

    public:
    OpenAdress(int c){

        cap = c;
        size = 0;
        std::vector<int> table(cap,-1);

    }

    int hash(int key){

        return key % cap;

    }

    bool search(int key){

        int ind = hash(key);
        if(table[ind] == key){
            return true;
        }
        while(table[ind] != -1){
            if(table[ind] == key) return true;
            ind = (ind + 1)%cap;
            if(table[ind] == hash(key)) return false; 
        }
        return false;

    }

    bool insertkro(int key){

        int index = hash(key);
        if(size == cap){
            return false;
        }
        if(table[index] == -1 || table[index] == -2){
            table.insert(table.begin() + index, key);
            size++;
            return true;
        }
        
        
        int i = index;
        while(i != -1 || i != -2){
            if(table[i] == key){
                std::cout<<key<<" is already present"<<std::endl;
                return false;
            }
            i = (i + 1) % cap;
            if(i == index){
                std::cout<<"The table is full"<<std::endl;
                return false;
            } 
        }
        table.insert(table.begin() + i, key);
        size++;return true;

    }

};