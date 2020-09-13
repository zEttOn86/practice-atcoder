#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;
class Dice{
    public:
        Dice(){
            number = new int[6];
            work = new int[6];
        }
        ~Dice(){
            delete[] number;
            delete[] work;
        }
        void setLabel(int index, int num){
            number[index] = num;
        }
        void roll(char dst){
            rep(i, 6) work[i] = number[i];
            switch (dst)
            {
            case 'E':
                setNumber(work[3],work[1],work[0],work[5],work[4],work[2]);
                break;
            case 'N':
                setNumber(work[1],work[5],work[2],work[3],work[0],work[4]);
                break;
            case 'S':
                setNumber(work[4],work[0],work[2],work[3],work[5],work[1]);
                break;
            case 'W':
                setNumber(work[2],work[1],work[5],work[0],work[4],work[3]);
                break;
            }
        }
        int returnPeek(){
            return number[0];
        }

    private:
        int* number;
        int* work;

        void setNumber(int n0,int n1,int n2,int n3,int n4,int n5){
            number[0] = n0;
            number[1] = n1;
            number[2] = n2;
            number[3] = n3;
            number[4] = n4;
            number[5] = n5;
        }
};

int main()
{
    Dice dice;
    int label;
    char ch;
    rep(i, 6){
        cin >> label;
        dice.setLabel(i, label);
    }
    getchar();
    while((ch = getchar()) != '\n'){
		dice.roll(ch);
	}
	printf("%d\n",dice.returnPeek());
    return 0;
}