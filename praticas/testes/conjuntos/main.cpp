#include <queue>
#include <set>
#include <iostream>

struct set
{
    size_t length;
    int *elements;
};

// references
void intersection(set A, set B);
void difference(set A, set B);
void unionF(set A, set B);
int *getElementsFromQueue(std::queue<int> g);
int nthElement(int n, int *address);
void showSet(set G);
// end of references

set get_set()
{
    setlocale(LC_ALL, "Portuguese");
    int qtd;
    int* elements = (int *)malloc(sizeof(int) * qtd);
    printf("Tell me how many integers numbers this SET will have:");
    scanf("%i", &qtd);
    for (int i = 0; i < qtd; i = i + 1)
    {
        printf("Tell me the %iº number:", (i+1));
        scanf("%i", &elements[i]);
        bool isRepeated = false;
        do {
            isRepeated = false;
            for(int j=0; j < i; j++)
                if( nthElement(j, elements) == nthElement(i, elements)) {
                    isRepeated = true;
                    printf("This number already exists on SET. \nTell me the %iº number again:", (i+1));
                    scanf("%i", &elements[i]);
                }
        } while(isRepeated);
    }
    set aux = {.length = qtd, .elements = elements};
    return aux;
}

int main(int argc, char **argv)
{
    // colete os dados dos conjuntos A e B
    std::cout << "Just numbers beloging to Integer set.\n";
    set A = get_set();
    set B = get_set();
    std::cout << "Now you have two sets called set A and set B\n";
    std::cout << "A ";
    showSet(A);
    std::cout << "B ";
    showSet(B);
    unionF(A, B);
    intersection(A, B);
    difference(A, B);

    return 0;
}
// functions
void intersection(set A, set B)
{
    std::queue<int> intersectionQueue;
    // who's greater?
    //  int greaterSet = ALength < BLength ? BLength: ALength;
    for (int aIndex = 0; aIndex < A.length; aIndex++)
    {
        for (int bIndex = 0; bIndex < B.length; bIndex++)
        {
            if (A.elements[aIndex] == B.elements[bIndex])
                intersectionQueue.push(B.elements[bIndex]);
        }
    }
    // return a new SET with the intersecction elements
    set intersection = {
        .length = intersectionQueue.size(),
        .elements = getElementsFromQueue(intersectionQueue)};
    std::cout << "\nThe intersection set is : \n";
    std::cout << "A ^ B ";
    showSet(intersection);
}

void unionF(set A, set B)
{
    std::set<int> unionSet;
    for (int aIndex = 0; aIndex < A.length; aIndex++)
    {
        unionSet.insert(A.elements[aIndex]);
    }
    for (int bIndex = 0; bIndex < B.length; bIndex++)
    {
        unionSet.insert(B.elements[bIndex]);
    }

    // printing union
    std::set<int, std::greater<int>>::iterator itr;
    std::cout << "\nThe union set is : \n";
    std::cout << "A U B = { ";
    for (itr = unionSet.begin(); itr != unionSet.end(); itr++)
    {
        std::cout << *itr << ", ";
    }
    std::cout << " };";
    std::cout << std::endl;
}

void difference(set A, set B)
{
    std::set<int> differenceSet;
    for (int aIndex = 0; aIndex < A.length; aIndex++)
    {
        bool existsInB = false;
        for (int bIndex = 0; bIndex < B.length; bIndex++)
        {
            if (A.elements[aIndex] == B.elements[bIndex])
                existsInB = true;
        }
        // ↓↓ add elements of A if it does not exist in B ↓↓
        if (!existsInB)
            differenceSet.insert(A.elements[aIndex]);
    }
    // printing union
    std::set<int, std::greater<int>>::iterator itr;
    std::cout << "\nThe difference set is : \n";
    std::cout << "A - B = { ";
    for (itr = differenceSet.begin(); itr != differenceSet.end(); itr++)
    {
        std::cout << *itr << ", ";
    }
    std::cout << " };";
    std::cout << std::endl;
}

// utils
void showSet(set G)
{

    std::cout << " = { ";
    for (int i = 0; i < G.length; i++)
    {
        std::cout << G.elements[i] << (G.length == (i+1) ? "": ", ");
    }
    std::cout << " };\n";
}
int *getElementsFromQueue(std::queue<int> g)
{
    // int array[g.size()] = {};
    int *elementsFromQueue = (int *)malloc(sizeof(int) * g.size());
    int i = 0;
    while (!g.empty())
    {
        *(elementsFromQueue + i) = g.front();
        g.pop();
        i++;
    }
    return elementsFromQueue;
}

int nthElement(int n, int *address)
{
    return *(address + n);
}