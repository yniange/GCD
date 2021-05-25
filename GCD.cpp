//求两个正整数的最大公约数和最小公倍数。
//1、采用欧几里德算法计算最大公约数；
//2、最小公倍数等于两数之积除以最大公约数。
//欧几里德算法也称辗转相除法
//原理：
//两个正整数a和b，当a > b时，如果0 == a % b，
//则b为a和b的最大公约数，否则a和b的最大公约
//数等于b与a % b最大公约数。
//证明：
//∵ 0 != a % b ∴ a == kb + r ∴ r == a % b
//假设d是a和b的一个公约数，
//则有a == m * d    b == n * d，由于r == a - kb
//∴ r = (m - k * n) * d  因此 d也是b和a % b的公约数
//以上得出，当a > b且0 != a % b时，a和b的任意一个公约数都必定也是b和a % b的公约数
//∴当a > b且0 != a % b时， a和b的最大公约数也必然等于b和a % b的最大公约数


#include <iostream>
using namespace std;
int main(void)
{
    int num1, num2;
    cout << "--求两个正整数的最小公倍数和最大公约数--\n";
    while (true)
    {
        cout << "请输入两个正整数:" << endl;
        cin >> num1 >> num2;
        if (num1 > 0 && num2 > 0) break;
        else
            cout << "您的输入有误！" << endl;
    }
    int a = num2, b = num1, r;
    while (0 != (r = a % b))
    {
        a = b;
        b = r;
    }
    //输出最大公约数和最小公倍数
    cout << num1 << "和" << num2 << "的最大公约数为：" << b << endl;
    cout << num1 << "和" << num2 << "的最小公倍数为：" << num1 * num2 / b << endl;

    return 0;
}