// Matrix-Addition.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;
std::vector<std::vector<int> > matrixAddition(std::vector<std::vector<int> > a, std::vector<std::vector<int> > b) {
	// your code here
	int len = a.size();
	std::vector<std::vector<int>> sum;
	sum.resize(len);
	for (int i = 0; i < len; i++) {
		sum[i].resize(a[i].size());
		for (int j = 0; j < a[i].size(); j++) {
			sum[i][j] = (a[i][j] + b[i][j]);
		}
	}
	return sum;
}

int main()
{
	stringstream ss;
	
	std::vector<std::vector<int> > result = matrixAddition( { { 1 } } ,{ { 2 } });
	
	for (int i = 0; i < result.size(); i++) {
		for (int j = 0; j < result[i].size(); j++) {
			cout << result[i][j] << endl;
		}
	}
	system("pause");
    return 0;
}

