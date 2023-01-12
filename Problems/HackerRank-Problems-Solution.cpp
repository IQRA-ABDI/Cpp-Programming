
// Problem 1 Solution
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    printf("Hello, World!");
    return 0;
}

// Problem 2 Solution
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int s;
    int r;
    cin >> n >> s >> r;

    int sum = n + s + r;
    cout << sum;
    return 0;
}

// Problem 3 Solution

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    // Complete the code.
    int a;
    cin >> a;
    long b;
    cin >> b;
    char c;
    cin >> c;
    float d;
    cin >> d;
    double e;
    cin >> e;

    scanf("%d %ld %c %f %lf ", &a, &b, &c, &d, &e);
    printf("%d\n%ld\n%c\n%f\n%lf", a, b, c, d, e);

    return 0;
}

// Problem 4 Solution

#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    // Write your code here
    if (n <= 9)
    {
        if (n == 0)
        {
            cout << "zero";
        }
        else if (n == 1)
        {
            cout << "one";
        }
        else if (n == 2)
        {
            cout << "two";
        }
        else if (n == 3)
        {
            cout << "three";
        }
        else if (n == 4)
        {
            cout << "four";
        }
        else if (n == 5)
        {
            cout << "five";
        }
        else if (n == 6)
        {
            cout << "six";
        }
        else if (n == 7)
        {
            cout << "seven";
        }
        else if (n == 8)
        {
            cout << "eight";
        }
        else if (n == 9)
        {
            cout << "nine";
        }
    }
    else
    {
        cout << "Greater than 9";
    }

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}

// Problem 5 Solution

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    // Complete the code.
    int a = 0;
    int b = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {

        if (i == 1)
        {
            cout << "one\n";
        }
        else if (i == 2)
        {
            cout << "two\n";
        }
        else if (i == 3)
        {
            cout << "three\n";
        }
        else if (i == 4)
        {
            cout << "four\n";
        }
        else if (i == 5)
        {
            cout << "five\n";
        }
        else if (i == 6)
        {
            cout << "six\n";
        }
        else if (i == 7)
        {
            cout << "seven\n";
        }
        else if (i == 8)
        {
            cout << "eight\n";
        }
        else if (i == 9)
        {
            cout << "nine\n";
        }
        else if (i > 9 && i % 2 == 0)
        {
            cout << "even\n";
        }
        else if (i > 9 && i % 2 != 0)
        {
            cout << "odd\n";
        }
    }

    return 0;
}

// Problem 6 Solution

#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    return max(max(a, b), max(c, d));
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}

// Problem 7 Solution

#include <stdio.h>
#include <iostream>
using namespace std;

void update(int *a, int *b)
{
    // Complete this function
    *a += (*b);
    *b = abs((*a) - (*b) - (*b));
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

// Problem 8 Solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; n > i; i++)
    {
        cin >> a[i];
    }
    for (int i = n; i > 0; i--)
    {

        cout << a[i - 1] << " ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

// Problem 9 Solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int **arr;
    int n, q;

    cin >> n >> q;
    arr = new int *[n];

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        arr[i] = new int[k];
        for (int j = 0; j < k; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int indx = 0; indx < q; indx++)
    {
        int i, j;
        cin >> i >> j;
        cout << arr[i][j] << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

// Problem 10 Solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int **arr;
    int n, q;

    cin >> n >> q;
    arr = new int *[n];

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        arr[i] = new int[k];
        for (int j = 0; j < k; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int indx = 0; indx < q; indx++)
    {
        int i, j;
        cin >> i >> j;
        cout << arr[i][j] << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
