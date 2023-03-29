#include <queue>
#include <set>
#include <iostream>

struct set
{
    size_t length;
    int* elements;
};

//references
void intersection(set A, set B);
void difference(set A, set B);
void unionF(set A, set B);
int* getElementsFromQueue(std::queue<int> g);
int howManyElements(set G);
int howManyElements(set G);
int nthElement(int n, int* address);
void showSet(set G);
//end of references

int main(int argc, char** argv) {
    //colete os dados dos conjuntos A e B
    std::cout << "Just numbers beloging to Integer set.\n";
    int Aelements[10] = {444, 678, 904, 1000, 888, 432, 555, 3209, 19089, 55};
    int* Aadress = (int*) malloc(sizeof(int) * 10);
    Aadress = Aelements;
    set A = {.length = 10, .elements = Aadress};
    int Belements[8] = {444, 678, 904, 77, 76, 432, 7};
    int* Badress = (int*) malloc(sizeof(int) * 8);
    Badress = Belements;
    set B = {.length = 8, .elements = Badress};
    std::cout << "criado os dois conjuntos\n";
    // std::cout << (int) *A.elements + sizeof(int)*2 << "\n";
    unionF(A, B);
    intersection(A, B);
    difference(A, B);

    return 0;
}
// functions
void intersection(set A, set B) 
{
    std::queue<int> intersectionQueue;
    //who's greater?
    // int greaterSet = ALength < BLength ? BLength: ALength;
    for(int aIndex=0; aIndex<A.length; aIndex++){
        for(int bIndex=0; bIndex<B.length; bIndex++){
            if(A.elements[aIndex] == B.elements[bIndex])
                intersectionQueue.push(B.elements[bIndex]);
        }
    }
    //return a new SET with the intersecction elements
    set intersection = {
        .length = intersectionQueue.size(), 
        .elements = getElementsFromQueue(intersectionQueue)
    };
    showSet(intersection);
}

void unionF(set A, set B) 
{
    std::set<int> unionSet;
    for(int aIndex=0; aIndex<A.length; aIndex++){
        unionSet.insert(A.elements[aIndex]);
    }
    for(int bIndex=0; bIndex<B.length; bIndex++){
        unionSet.insert(B.elements[bIndex]);
    }

    // printing union
    std::set<int, std::greater<int> >::iterator itr;
    std::cout << "\nThe union set is : \n";
    for (itr = unionSet.begin(); itr != unionSet.end(); itr++) {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;
}

void difference(set A, set B) 
{
    std::set<int> differenceSet;
    for(int aIndex=0; aIndex<A.length; aIndex++){
        bool existsInB = false;
        for(int bIndex=0; bIndex<B.length; bIndex++){
            if(A.elements[aIndex] == B.elements[bIndex])
                existsInB = true;
        }
        //↓↓ add elements of A if it does not exist in B ↓↓
        if(!existsInB) differenceSet.insert(A.elements[aIndex]);
    }
    // printing union
    std::set<int, std::greater<int> >::iterator itr;
    std::cout << "\nThe difference set is : \n";
    for (itr = differenceSet.begin(); itr != differenceSet.end(); itr++) {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;
}

//utils
void showSet(set G) {
    std::cout << "<<Conjunto>>\n";
    std::cout << "Tamanho: " << G.length << "\n";
    std::cout << "<<Elementos do conjunto>>\n";
    int length = howManyElements(G);
    for(int i =0; i < length; i++){
        std::cout << "Elemento nº" << i+1 << " = " << G.elements[i] << "\n";
    }
}
int* getElementsFromQueue(std::queue<int> g) {
    // int array[g.size()] = {};
    int* elementsFromQueue = (int*) malloc(sizeof(int) * g.size());
    int i=0;
    while (!g.empty()) {
        *(elementsFromQueue + i) = g.front(); 
        g.pop();
        i++;
    }
    return elementsFromQueue;
}
int howManyElements(set G){
    return sizeof(G.elements) / 2; //2 = int size
}
int nthElement(int n, int* address){
    return *(address + n);
}