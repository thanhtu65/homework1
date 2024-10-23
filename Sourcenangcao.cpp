#include <iostream>
using namespace std;
struct Population {
	int year;
	int people;
};
int main() {
    int n; cin >> n;
    Population data[100];  
    for (int i = 0; i <n; i++) {
        data[i].year = 1920 + i;
        cout<< data[i].year << ": ";
        cin >> data[i].people;
    }
    int max = 0, min =0;
    for (int i = 0; i < n; i++) {
        if (data[i].people > data[max].people) {
            max = i;
        }
        if (data[i].people<= data[min].people) {
            min = i;
        }
    }
    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (data[i].people == data[j].people) {
                cout << "So nguoi " << data[i].people << " xuat hien o cac nam " << data[i].year << " va "<< data[j].year << endl;
                found = true;
            }
        }
    }
    if (!found) cout << "khong co nam nao thoa man";
    cout << "Nam co so nguoi sinh ra nhieu nhat la " << data[max].year << endl;
    cout << "Nam co so nguoi sinh ra it nhat la " << data[min].year;
    return 0;
}


//void Partition(int a[], int f, int l) {
//	if (f >= l) return;
//	int c = a[f];
//	int i = f + 1, j = l;
//	while (i <= j) {
//		while (a[i] <= c && i <= j) i++;
//		while (a[j] > c && i <= j) j--;
//		if (i < j) swap(a[i], a[j]);
//	}
//	swap(a[f], a[j]);
//	Partition(a, f, j - 1);
//	Partition(a, j + 1, l); 
//}
//int main() {
//	int n; cin >> n;
//	int a[100];
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	Partition (a, 0, n - 1);
//	for (int k = 0; k <n; k++) {
//		cout << a[k] << " ";
//	}
//}