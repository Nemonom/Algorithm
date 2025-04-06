#include <iostream>

using namespace std;

int result_cnt = 0;
int num = 0;
int check[15];

bool check_available(int cur)
{
    for (int i = 0; i < cur; i++)
    {
        if ((check[i] == check[cur]) || (abs(check[i] - check[cur]) == cur - i))
            return false;
    }

    return true;
}

void func(int cur)
{
    if (cur == num)
    {
        result_cnt++;
        return;
    }
    
    
    for (int i = 0; i < num; i++)
    {
        check[cur] = i;

        if (check_available(cur))
            func(cur + 1);
    }
}



int main(void)
{
    cin >> num;
    func(0);
    cout << result_cnt;

    return 0;
}