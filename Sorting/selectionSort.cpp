#include <iostream>
#include <vector>
using namespace std;

/*
vector<int> arr	    拷贝一份新数组，修改不会影响原始的
vector<int>& arr    引用原始数组，直接修改原始数据，更快更省内存(给对象起个“别名”)
const vector<int>& arr  只读，不改, 避免拷贝，又能防止误修改，非常常见
vector<int>* arr	把对象地址交给你，自己看着办（需要解引用）

*/
//i~n-1范围上，找到最小值并放在i位置，然后i+1~n-1范围上继续
class SelectionSort{
    public:
        static void swap(vector<int>& arr,int i, int j){
            int tem = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

        static void selectionSort(vector<int>& arr, int i, int j){
            if (arr.size() < 2) return;
            // JAVA中这里要同时判断是不是为空|| <2， 防止空指针异常
            // CPP中 这里一个 引用传递的 vector（vector<int>& arr），不是指针，调用函数前必须已经初始化 所以它 不可能是 null，只需要判断大小即可

            for (int i = 0; i < arr.size()-1; ++i){
                int min = i;
                for (int j = i+1; j < arr.size(); ++j){
                    if (arr[min] > arr[j]) min = j;
                }
                swap(arr, min, i)
            }
        }

};

void printArray(const vector<int>& arr){
    for (num : arr){
        cout << num << " ";
    }
    cout << endl;
}


int main(){
    vector<int> arr1 = {1,3,5,3,25,6};

    cout << "原始数组：";
    printArray(arr1);






    return 0;
}