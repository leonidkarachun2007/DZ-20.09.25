#include <iostream>
using namespace std;

//� ���������� �������, ����������� ���������� �������, ���������� ����������� � ������������ ��������.
//int main() {
//	int arr[5]{ 1,2,3,4,5 };
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << "\t";
//	}
//
//	int min = arr[0];
//	int max = arr[0];
//	for (int i = 1; i < 5; i++) {
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//		
//	cout << "\n�������: " << min << endl;
//	cout << "\n��������: " << max << endl;
//}


// � ���������� �������, ����������� ���������� ������� � �������� ������������� ���������, ����� ����� ���������, �������� ������� ������ ���������� �������������.

//int main() {
//
//    int const n = 10;
//    int mass[n];
//    int a;
//	  int b;
//    int sum;
//    int level;
//
//    cout << "Enter the start of the range to generate " "numbers:\n";
//    cin >> a;
//    cout << "Enter the end of the range:\n";
//    cin >> b;
//    cout << "Enter the level value:\n";
//    cin >> level;
//
//    for (int i = 0; i < n; i++) {
//        mass[i] = a + rand() % (b - a);
//        cout << mass[i] << " ";
//    }
//
//    sum = 0;
//    for (int i = 0; i < n; i++) {
//        if (mass[i] < level) {
//            sum = sum + mass[i];
//        }
//    }
//
//    cout << "\nSum:" << sum;
//
//
//}

// 

// ������������ ������ ������� ����� �� ��� (12 �������).����� ������������ ������ ��������(��������, 3 � 6 � ���������� 3 - � � 6 - � �������).���������� ���������� �����,� ������� ������� ���� ����������� � �����, � ������� ������� ���� ���������� � ������ ���������� ���������.

//int main() {
//    const int MONTHS = 12;
//    double profit[MONTHS];
//
//    cout << "Enter your profit for 12 months: ";
//    for (int i = 0; i < MONTHS; i++) {
//        cin >> profit[i];
//    }
//
//    int startMonth, endMonth;
//    cout << "Enter the range of months for analysis (e.g., 3 6): ";
//    cin >> startMonth >> endMonth;
//
//  
//    if (startMonth < 1 || endMonth > 12 || startMonth > endMonth) {
//        cout << "Incorrect range of months!" << endl;
//        return 1;
//    }
//
//
//    double maxProfit = profit[startMonth - 1];
//    double minProfit = profit[startMonth - 1];
//    int maxMonth = startMonth;
//    int minMonth = startMonth;
//
//
//    for (int i = startMonth - 1; i < endMonth; i++) {
//        if (profit[i] > maxProfit) {
//            maxProfit = profit[i];
//            maxMonth = i + 1;
//        }
//        if (profit[i] < minProfit) {
//            minProfit = profit[i];
//            minMonth = i + 1;
//        }
//    }
//
//    cout << "The maximum profit was in the month " << maxMonth
//        << " (" << maxProfit << ")" << endl;
//    cout << "The minimum profit was in a month. " << minMonth
//        << " (" << minProfit << ")" << endl;
//
//
//}




