#include<bits/stdc++.h>
using namespace std;

void pattern1 (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern2 (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i+1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern3 (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < i+2; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern4 (int n) {
    for (int i = 1; i < n+1; i++) {
        for (int j = 0; j < i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern5 (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern6 (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n-i+1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern7 (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        for (int k= 0; k < 2*i+1; k++) {
            cout << "*";
        }
        for (int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern8 (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int k= 0; k < (2*n)-(2*i)-1; k++) {
            cout << "*";
        }
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern9 (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        for (int k= 0; k < 2*i+1; k++) {
            cout << "*";
        }
        for (int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int k= 0; k < (2*n)-(2*i)-1; k++) {
            cout << "*";
        }
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern10 (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i+1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern11 (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i+1; j++) {
            if ((i+j)%2 == 0) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
    cout << endl;
}
void pattern12 (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i+1; j++) {
            if ((i+j)%2 == 0) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
    cout << endl;
}
void pattern13 (int n) {
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < i+1; j++){
            cout << j+1 << " ";
        }
        for(int j = 0; j < n-i-1; j++){
            cout << "  ";
        }
        for(int j = 0; j < n-i-1; j++){
            cout << "  ";
        }
        for(int j = i+1; j > 0 ; j--){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern14 (int n) {
    for (int i = 1; i <= n; i++) {
        for (char ch = 'A'; ch < 'A'+i; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern15 (int n) {
    for (int i = 1; i <= n; i++) {
        for (char ch = 'A'; ch < 'A'+n-i+1; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern16 (int n) {
    for (char ch = 'A'; ch < 'A' + n; ch++) {
        for (char i = 'A'; i < ch+1; i++) {
            cout << ch << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern17 (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            cout << "  ";
        }
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for (int j = 0; j < 2*i+1; j++) {
            cout << ch << " ";
            if (j+1 <= breakpoint) {
                ch++;
            } else {
                ch--;
            }
        }
        for (int j = 0; j < n-i-1; j++) {
            cout << "  ";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern18 (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << char(('A'+ n - 1)-j) << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern19 (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i; j++) {
            cout << "* ";
        }
        for (int k= 0; k < 2*i; k++) {
            cout << "  ";
        }
        for (int j = 0; j < n-i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i+1; j++) {
            cout << "* ";
        }
        for (int k= 0; k < (2*n)-(2*i)-2; k++) {
            cout << "  ";
        }
        for (int j = 0; j < i+1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern20 (int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < i+1; j++) {
            cout << "* ";
        }
        for (int k= 0; k < (2*n)-(2*i)-2; k++) {
            cout << "  ";
        }
        for (int j = 0; j < i+1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i; j++) {
            cout << "* ";
        }
        for (int k= 0; k < 2*i; k++) {
            cout << "  ";
        }
        for (int j = 0; j < n-i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern21 (int n) {
    if (n > 1) {
        for (int i = 0; i < n; i++) {
            cout << "*";
        }
        cout << endl;
        for (int i = 0; i < n-2; i++) {
            cout << "*";
            for (int j = 0; j < n-2; j++) {
                cout << " ";
            }
            cout << "*" << endl;
        }
        for (int i = 0; i < n; i++) {
            cout << "*";
        }
        cout << endl;
    } else if (n = 1) {
        cout << "*" << endl;
    }
    cout << endl;
}
void pattern22 (int n) {
    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int min_dist = min(min(i, j), min(size - i - 1, size - j - 1));
            cout << n - min_dist;
        }
        cout << endl;
    }
    cout << endl;
}
bool checkArmstrong(int n){
	int m = n;
	int s = 0;
	int ld;
	while (m < 0) {
		ld = m%10;
		int cld = ld*ld*ld;
		s = s + cld;
		m /= 10;
	}
	return s == n;
}



int main () {
    // int n;
    // cin >> n;
    int n = 5;
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);
    pattern9(n);
    pattern10(n);
    pattern11(n);
    pattern12(n);
    pattern13(n);
    pattern14(n);
    pattern15(n);
    pattern16(n);
    pattern17(n);
    pattern18(n);
    pattern19(n);
    pattern20(n);
    pattern21(n);
    pattern22(n);
    // cout << checkArmstrong(n);
    // reccFunc1(1, 10);
    // reccFunc2(1, 10);
    // reccFunc3(1, 10);
    // sumRecc1(3, 0);
    // cout << sumRecc2(4) << endl;
    // cout << facRecc(4) << endl;
    // int n; 
    // cin >> n;
    // int arr[n];
    // for (int i=0;i<n;i++) {
    //     cin >> arr[i];
    // }
    // reverse(0, arr, n);
    // for(int i=0;i<n;i++) {
    //     cout << arr[i] << " ";
    // }
    // string s = "madame";
    // cout << endl << checkPal(0, s);
    return 0;
}