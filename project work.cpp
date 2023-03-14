#include <iostream>

using namespace std;

void exerciseInfo() {
	cout << "Da se sustavi programa za obrabotka na dva masiva A[N,N] i B[N,N], kudeto dannite sa celi chisla v intervala [-1000;1000]" << endl;
	cout << "Programata da izvurshi slednite deystviq: " << endl;
	cout << "otpechatavane na uslovieto na zadachata;" << endl;
	cout << "otpechatvane na imenata na avtora na programata;" << endl;
	cout << "vavejdane na vhodnite danni;" << endl;
	cout << "otpechatvane na vhodnite danni;" << endl;
	cout << "a) da se obrazuva ednomeren masiv C[N], elementite na koyto sa sredno aritmetichno ot elementite na saotvetnata kolona ot masiva PR;" << endl;
	cout << "b) polucheniqt masiv da se sortira po golemina" << endl;
	cout << "otpechatvane na poluchenite rezulatati sled obrabotka a) i sled obrabotka na b)" << endl;

}
void studentInfo() {
	cout << "\n\tMert Mustafov Kamberov\t371222025\n";
}

bool inRange(float input) {
	if (input >= -1000 && input <= 1000)
		return true;

	return false;
}
float bubbleSort(float arr[], int len) {
	int n = len;
	float temp;
	for (int i = 0; i < (n - 1); i++)
	{
		for (int j = 0; j < (n - i - 1); j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	return arr[len];
}
int main() {
	exerciseInfo();
	studentInfo();
	int const N = 3;
	float PR[N][N], C[N], avg = 0, sum = 0;
	int i, j;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			do {
				printf("PR[%d, %d]= ", i, j);
				cin >> PR[i][j] ;
			} while (!inRange(PR[i][j]));
		}
	}
	/*---OTPECHATVANE NA MASIVA PR I VAVEJDANE NA ELEMENTITE V MASIVA C ---*/
	cout << "********ELEMENTITE NA MASIVA PR*********" << endl;
	for (i = 0; i < N; i++) {
		sum = 0;
		avg = 0;
		for (j = 0; j < N; j++) {
			cout << PR[i][j] << " ";
			sum += PR[i][j];
		}
		cout << endl;
		avg = sum / N;
		C[i] = avg;
	}
	bubbleSort(C, N);
	cout << endl << endl << "********ELEMENTITE NA MASIVA C*********" << endl;
	for (i = 0; i < N; i++) {
		//cout << "Sredno aritm. na kolona nomer "<< i+1 << ": "<< C[i] << endl;
		//printf("Sredno aritmetichno na kolona nomer %d: %.2f \n", i, C[i]);
		cout << C[i] << endl;

	}
	system("Pause");
	return 0;
}
