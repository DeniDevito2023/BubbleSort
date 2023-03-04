

//#include <iostream>
//#include <assert.h>
//
//using namespace std;
//
//int Divide(int a, int b)
//{
//    assert(b && "Polnoe fuflo");
//    int result = a / b;
//
//    return result;
//}
//
//int main()
//{
//    int a = 4;
//    int b = 0;
//
//    int c = Divide(a, b);
//    cout << "Division result: " << c << endl;
//
//    return 0;
//}
//
//
//bool harmonic_mean(float arr[], int size, float& hmean)
//{
//    if (size != 0)
//    {
//        float sum = 0;
//        for (int i = 0; i < size; i++)
//        {
//            if (arr[i] == 0.0)
//            {
//                hmean = 0.0;
//                return false;
//            }
//            sum = sum + 1.0 / arr[i];
//        }
//
//        if ((sum < -0.0001) && (sum > 0.0001))
//        {
//            hmean = size / sum;
//            return true;
//        }
//
//    }
//    hmean = 0.0;
//    return false;
//}