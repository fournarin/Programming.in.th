#include <bits/stdc++.h>
using namespace std;

// รายการข้อมูลสำหรับแปลงเลขอารบิกเป็นเลขโรมัน
struct RomanNumeral {
    int value;
    string numeral;
};

// อาร์เรย์ข้อมูลเลขโรมัน
const RomanNumeral romanNumerals[] = {
    {400, "CD"},
    {100, "C"},
    {90, "XC"},
    {50, "L"},
    {40, "XL"},
    {10, "X"},
    {9, "IX"},
    {5, "V"},
    {4, "IV"},
    {1, "I"}
};

// ฟังก์ชันสำหรับแปลงเลขอารบิกเป็นเลขโรมัน
string intToRoman(int num) {
    string result = "";
    for (const RomanNumeral& rn : romanNumerals) {
        while (num >= rn.value) {
            result += rn.numeral;
            num -= rn.value;
        }
    }
    return result;
}

int main() {
    int n,i=0,v=0,x=0,l=0,c=0;
    int arr[5]={0,0,0,0,0};
    string s="IVXLC";
    cin>>n;
    for(int i=1;i<=n;i++){
        string roman = intToRoman(i);
        for(int j=0;j<roman.length();j++){
            for(int k=0;k<5;k++){
                if(roman[j]==s[k]){
                    arr[k]++;
                }
            }
            
        }
    }
    for(int k=0;k<5;k++){
        cout<<arr[k]<<" ";
    }
    /*int num;
    cout << "ป้อนเลขอารบิก: ";
    cin >> num;

    if (num < 1 || num > 3999) {
        cout << "เลขไม่ถูกต้อง โปรดป้อนเลขระหว่าง 1 ถึง 3999" << endl;
    } else {
        string roman = intToRoman(num);
        cout << "เลขโรมัน: " << roman << std::endl;
    }*/

    return 0;
}