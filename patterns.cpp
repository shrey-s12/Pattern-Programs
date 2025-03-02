#include <bits/stdc++.h>
using namespace std;

void print7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        for (int k = 0; k < (i * 2 + 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print8(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < (n - i); j++)
        {
            cout << " ";
        }
        for (int k = 0; k < (i * 2 - 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        for (int k = 0; k < (i * 2 + 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < (n - i); j++)
        {
            cout << " ";
        }
        for (int k = 0; k < (i * 2 - 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print10(int n)
{
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j <= i + 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for (int i = n - 1; i > 0; i--)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= (2 * n - 1); i++)
    {
        int starts = i;
        if (i > n)
        {
            starts = (2 * n - i);
        }
        for (int j = 1; j <= starts; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print11(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

void print12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int k = 0; k < (2 * n - 2 * i); k++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

void print13(int n)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

void print14(int n)
{
    for (int i = 0; i < n; i++)
    {
        char alpha = 'A';
        for (int j = 0; j < i + 1; j++)
        {
            cout << alpha;
            alpha++;
        }
        cout << endl;
    }
}

void print15(int n)
{
    for (int i = n; i > 0; i--)
    {
        char alpha = 'A';
        for (int j = i; j > 0; j--)
        {
            cout << alpha << " ";
            alpha++;
        }
        cout << endl;
    }
}

void print16(int n)
{
    char alpha = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << alpha << " ";
        }
        cout << endl;
        alpha++;
    }
}

void print17(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // Characters
        char alpha = 'A';
        int breakpoint = i + 1;
        for (int k = 1; k <= (2 * i + 1); k++)
        {
            cout << alpha;
            if (k >= breakpoint)
            {
                alpha--;
            }
            else
            {
                alpha++;
            }
        }
        cout << endl;
    }
}

void print18(int n)
{
    char ch = 'A' + n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        ch -= (i + 1);
        cout << endl;
    }
}

void print19(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        for (int k = 0; k < 2 * i; k++)
        {
            cout << " ";
        }

        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << "*";
        }

        for (int k = 2 * i; k > 0; k--)
        {
            cout << " ";
        }

        for (int j = n - i; j > 0; j--)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void print20(int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << "*";
        }

        for (int k = 2 * i; k > 0; k--)
        {
            cout << " ";
        }

        for (int j = n - i; j > 0; j--)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        for (int k = 0; k < 2 * i; k++)
        {
            cout << " ";
        }

        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void print21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void print22(int n)
{
    for (int i = 0; i < (2 * n - 1); i++)
    {
        for (int j = 0; j < (2 * n - 1); j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - i;
            int bottom = (2 * n - 2) - j;
            cout << (n - min(min(top, bottom), min(left, right)));
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    // print22(n);
    // print21(n);
    // print20(n);
    // print19(n);
    // print18(n);
    // print17(n);
    // print16(n);
    // print15(n);
    // print14(n);
    // print13(n);
    // print12(n);
    // print11(n);
    // print10(n);
    // print9(n);
    // print8(n);
    // print7(n);

    return 0;
}