#include<iostream>
#include<fstream>
#include<vector>

//V = length of vector
#define V 13
using namespace std;

void printSolution(int color[]);

//function that returns a boolean value to see if the assigned color is safe
bool isSafe(int graph[V][V], int color[]) {
	for (int i = 0; i < V; i++) {
		for (int j = i + 1; j < V; j++) {
			if (graph[i][j] && color[j] == color[i]) {
				return false;
			}
		}
	}
	return true;
}

bool graphColoring(int graph[V][V], int m, int i, int color[V]) {
	//if iterator has gone through vector, break
	if (i == V) {
		if (isSafe(graph, color)) {
			printSolution(color);
			return true;
		}
		return false;
	}

	for (int j = 1; j <= m; j++) {
		//assign a color value
		color[i] = j;
		//check the neighbor. If it's a legal color return true and reset. Else return false
		if (graphColoring(graph, m, i + 1, color)) {
			return true;
			color[i] = 0;
		}
		return false;
	}
}

//function to print 
void printSolution(int color[]) {
	cout << "A solution exists: \n";
	for (int i = 0; i < V; i++) {
		cout << " " << color[i];
		cout << "\n";
	}
}

int main() {
	string tmp1; char tmp2;
	//counties in Idaho file: NezPerces, Shoshone, Idaho, Washington, Boise, Ada, Owyhee, Alturas, Cassia, Lemhi, Custer, Oneida, Kootenai, BearLake;
	int graph[V][V];
	string countyList[14];
	string filePath;
	fstream infile;
	int m = 4; //number of colors
	//1 = red, 2 = green, 3 = blue, 4 = yellow
	int color[V] = { 0 };

	infile.open("C:\\constraints.txt");
	//Construct graph
	if (infile.is_open()) {

		for (int i = 0; i < V + 1; i++) {
			infile >> tmp1;
			countyList[i] = tmp1;
		}
		infile.get(tmp2);
		for (int i = 0; i < V; i++) {
			for (int j = 0; j < V; j++) {
				infile >> tmp2;
				if (tmp2 != 44) {
					graph[i][j] = tmp2;
				}
			}
		}
		infile.close();
	}

	if (!graphColoring(graph, m, 0, color)) {
		cout << "a solution does not exist";
	}
	return 0;
}
