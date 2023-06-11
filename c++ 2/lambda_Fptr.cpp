#include <iostream>
#include <string>
#include <vector>

void HelloWorld()
{
    std::cout<<"Hello World!"<<std::endl;
}

void Add2Values(int a, int b)
{
    std::cout<<"The sum is: " << a+b << std::endl;
}

template<typename T>
void PrintValue(T value)
{
    std::cout<< "Value: " << value<<std::endl;
}

template<typename T>
void ForEach(const std::vector<T>& values, void(*func)(T))
{
    for(auto value: values)
        func(value);
}

void ForEach2(const std::vector<int>& values, void(*func)(int))
{
    for(auto value: values)
        func(value);
}

int main()
{
    // Function Pointer

    //Way 1:
    auto f1 = HelloWorld;  // if we did --> auto function = HelloWorld();
                           // then here, we would have been calling HelloWorld function and storing the return value to f1
                           // But if we remove the parentehis, then now, we are getting the function pointer.
    
    //Now we can use "f1" to call the HelloWorld function
    f1();   // o/p: Hello World!

    //Way 2:
    void(*f2)() = HelloWorld;
    f2();

    //Way 3:
    typedef void(*Add2ValuesFunction)(int, int);
    Add2ValuesFunction f3 = Add2Values;
    f3(8,5);
    //Actual Use case
    std::vector<int> intValues = {5,3,2,9,18,98};
    std::vector<std::string> stringValues = {"kaushik","mala", "kankana", "dipak"};
    ForEach(intValues, PrintValue);
    ForEach(stringValues, PrintValue);

    //Lambda

    //Normally Lambda is used whereever we use function pointer, but if we want to define that function pointer inline

    std::vector<int> intValues2 = {5, 23, 56,92, 67};
    ForEach2(intValues2, [](int value){std::cout<< "Lambda Value: "<< value <<std::endl;});

    return 0;
}