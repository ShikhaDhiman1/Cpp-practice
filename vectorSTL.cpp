#include <iostream>
#include <vector>
using namespace std;

// VECTOR IS A DYNAMIC ARRAY.
// when an array overflows, vector creates another array having length double than the previous array and copies it's elements into the new 
// array and then deletes the previous array.

int main(){
    vector<int> v;

    // PUSH_BACK, CAPACITY and SIZE of vector:
    cout<<"\nCapacity of vector is : "<<v.capacity()<<endl;   //0
    cout<<"Size of vector is : "<<v.size()<<endl;             //0

    v.push_back(6);
    cout<<"\nCapacity of vector is : "<<v.capacity()<<endl;   //1
    cout<<"Size of vector is : "<<v.size()<<endl;             //1

    v.push_back(4);
    cout<<"\nCapacity of vactor is : "<<v.capacity()<<endl;   //1*2 = 2
    cout<<"Size of vector is : "<<v.size()<<endl;             //2

    v.push_back(9);
    cout<<"\nCapacity of vector is : "<<v.capacity()<<endl;   //2*2 = 4
    cout<<"Size of vector is : "<<v.size()<<endl;             //3

    v.push_back(2);
    cout<<"\nCapacity of vector is : "<<v.capacity()<<endl;   //4
    cout<<"Size of vector is : "<<v.size()<<endl;             //4

    v.push_back(7);
    cout<<"\nCapacity of vector is : "<<v.capacity()<<endl;   //4*2 = 8
    cout<<"Size of vector is : "<<v.size()<<endl;             //5

    cout<<"\nFirst element in the vector is : "<<v.front()<<endl;
    cout<<"Last element in the vector is : "<<v.back()<<endl;

    cout<<"\nVector before popping elements : \n";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Capacity of vector is : "<<v.capacity()<<endl;
    cout<<"Size of vector is : "<<v.size()<<endl;

    // POP_BACK
    v.pop_back();
    cout<<"\nVector after popping element from back : \n";
    for (int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Capacity of vector is : "<<v.capacity()<<endl;
    cout<<"Size of vector is : "<<v.size()<<endl;

    //CREATING a vector in another way : 

    vector<int> v1(5,2);// here 5 is the size of vector and the vector is initialized with value 2.

    cout<<"\nAnother vector is : \n";
    for(int i:v1){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Capacity of vector v1 is : "<<v1.capacity()<<endl;
    cout<<"Size of vector v1 is : "<<v1.size()<<endl<<endl;

    // copying vector v into another vector : 
    vector<int> v2(v);
    for (int i:v2){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Capacity of vector v2 is : "<<v2.capacity()<<endl;
    cout<<"Size of vector v2 is : "<<v2.size()<<endl<<endl;

    int n;
    cout<<"Enter the index : ";
    cin>>n;
    // AT()
    cout<<"\nElement at index "<<n<<" in vector v is : "<<v.at(n)<<endl;
    cout<<"Element at index "<<n<<" in vector v1 is : "<<v1.at(n)<<endl;
    cout<<"Element at index "<<n<<" in vector v2 is : "<<v2.at(n)<<endl;

    //ITERATOR
    cout<<endl;
    cout<<"Vector v using begin() and end() iterators : \n";
    for(auto i = v.begin(); i != v.end(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    //---OR-----
    // for(auto i = v.cbegin(); i != v.cend(); i++){
    //     cout<<*i<<" ";
    // }
    // cout<<endl;

    cout<<"\nReverse Vector v using rbegin() and rend() iterators : \n";
    for(auto i = v.rbegin(); i != v.rend(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    //---OR-----
    // for(auto i = v.crbegin(); i != v.crend(); i++){
    //     cout<<*i<<" ";
    // }
    // cout<<endl;

    cout<<"Vector v size : "<<v.size()<<endl;
    cout<<"Vector v capacity : "<<v.capacity()<<endl;
    cout<<"Vector v max-size : "<<v.max_size()<<endl;
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //re-sizing vector:
    cout<<"Vector v capacity : "<<v.capacity()<<endl;
    cout<<"Re- sizing vector : \n";
    v.resize(3);
    cout<<"Vector v size : "<<v.size()<<endl;
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Vector v capacity : "<<v.capacity()<<endl;

    // Shrinking the capacity of the vector to fit its size and destroys all elements beyond the capacity: 
    v.shrink_to_fit();
    cout<<"Vector v size : "<<v.size()<<endl;
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
     cout<<"Vector v capacity : "<<v.capacity()<<endl;
    cout<<"Vector v max-size : "<<v.max_size()<<endl;

    cout<<"\nAccessing the front element in the vector: \n";
    cout<<"1. using at(n) : v.at(0) --> "<<v.at(0)<<endl;
    cout<<"2. using front() : v.front() --> "<<v.front()<<endl;
    cout<<"3. using data()(returns pointer to the first element and not the element itself) : *v.data() --> "<<*(v.data())<<endl;

    vector <int> v3(5,10); // == vector<int> v3; v3.assign(5, 10);
    cout<<"Vector elements are : ";
    for(auto i = v3.begin(); i != v3.end(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;

    v3.insert((v3.begin()+3),15);
    v3.insert(v3.end(), 12); // == v3.push_back(12);
    v3.insert(v3.begin(), 25); // == v3.emplace(v3.begin(), 25)
    v3.emplace(v3.begin(), 5); // == v3.insert(v3.begin(), 5);

    cout<<"\nVector v3 after insertion : ";
    for(auto i = v3.begin(); i != v3.end(); i++){
        cout<<*i<<" ";
    }
    cout<<endl<<endl;

    cout<<"Erasing 6th element from vector v3 : ";
    v3.erase((v3.begin()+5));
    for(auto i = v3.begin(); i != v3.end(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;

    // Clearing a vector
    v3.clear();
    cout<<"Is v3 empty? "<<v3.empty()<<endl;

    vector<int> vec1, vec2;
    vec1.push_back(3); // == vec1.emplace_back(3);
    vec1.emplace_back(5);
    vec2.push_back(9); // == vec2.emplace_back(9);
    vec2.push_back(10); // == vec2.emplace_back(10);
    vec2.push_back(12); // == vec2.emplace_back(12);

    cout<<"\nVectors before swapping : \n";
    cout<<"Vector vec1 : ";
    for(int i:vec1){
        cout<<i<<" ";
    }
    cout<<"\nSize of vec1 : "<<vec1.size()<<endl;
    cout<<"Capacity of vec1 : "<<vec1.capacity()<<endl;
    cout<<"\nVector vec2 : ";
    for(int i:vec2){
        cout<<i<<" ";
    }
    cout<<"\nSize of vec2 : "<<vec2.size()<<endl;
    cout<<"Capacity of vec2 : "<<vec2.capacity()<<endl;
    
    swap(vec1, vec2);

    cout<<"\nVectors after swapping : \n";
    cout<<"Vector vec1 : ";
    for(int i:vec1){
        cout<<i<<" ";
    }
    cout<<"\nSize of vec1 : "<<vec1.size()<<endl;
    cout<<"Capacity of vec1 : "<<vec1.capacity()<<endl;
    cout<<"\nVector vec2 : ";
    for(int i:vec2){
        cout<<i<<" ";
    }
    cout<<"\nSize of vec2 : "<<vec2.size()<<endl;
    cout<<"Capacity of vec2 : "<<vec2.capacity()<<endl;
    cout<<endl;

    vector<int> vect1; // an empty vector : {}

    vect1.push_back(1);
    vect1.emplace_back(6);

    for(int i : vect1){
        cout<<i<<" ";
    }
    cout<<endl<<endl;
    

    vector<int> vect2(5,20);
    for(int i : vect2){
        cout<<i<<" ";
    }
    cout<<"\nSize of vector is : "<<vect2.size()<<endl;
    cout<<"Capacity of vector is : "<<vect2.capacity()<<endl<<endl;

    vect2.push_back(2);
    for(int i : vect2){
        cout<<i<<" ";
    }
    cout<<"\nSize of vector is : "<<vect2.size()<<endl;
    cout<<"Capacity of vector is : "<<vect2.capacity()<<endl<<endl;

    vector<pair<int, int>> vect3;
    vect3.push_back({1,2});
    vect3.emplace_back(2,4);

    for(int i = 0; i < vect3.size(); i++){
        cout<<vect3[i].first<<" "<<vect3[i].second<<endl;
    }
    cout<<endl;
    for(vector<int>::iterator it = vect2.begin(); it < vect2.end(); it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
    // ---OR-----
    for(vector<int>::iterator i = vect2.begin(); i != vect2.end(); i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;
    //---OR-----
    for(auto i = vect2.begin(); i != vect2.end(); i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;
    //---OR-----
    for(auto i : vect2){
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int> vect4(6);  // will initialize the vector with any garbage value or zeroes, i.e., 0 0 0 0 0 0 ==> depends on the compiler, basically.
    for(int i = 0; i < vect4.size(); i++){
        cout<<vect4[i]<<" ";
    }
    cout<<endl;
    cout<<*(vect4.rend())<<endl;
    cout<<endl;

    vector<int> vec3(5,100);
    for(auto i:vec3){
        cout<<i<<" ";
    }
    cout<<endl;

    vec3.insert(vec3.begin(), 0);
    for(auto i:vec3){
        cout<<i<<" ";
    }
    cout<<endl;

    vec3.insert(vec3.end(), 500);
    for(auto i:vec3){
        cout<<i<<" ";
    }
    cout<<endl;

    vec3.insert(vec3.begin()+2, 3, 50);
    for(auto i:vec3){
        cout<<i<<" ";
    }
    cout<<endl;

    vec3.insert(vec3.begin(), vect2.begin(), vect2.end());
    for(auto i:vec3){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}